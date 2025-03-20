#include "opentreethread.h"
#include <QDir>
#include "protreeitem.h"
#include "const.h"
OpenTreeThread::OpenTreeThread(const QString &src_path, int file_count,
                               QTreeWidget *self, QObject *parent)
    :QThread(parent),_bstop(false),_src_path(src_path),_file_count(file_count),
    _self(self),_root(nullptr)
{

}

void OpenTreeThread::OpenProTree(const QString &src_path, int &file_count, QTreeWidget *self)
{
    QDir src_dir(src_path);
    auto name = src_dir.dirName();
    auto* item =new ProTreeItem(self,name,src_path,TreeItemPro);
    item->setData(0,Qt::DisplayRole,name);
    item->setData(0,Qt::DecorationRole,QIcon(":/icon/dir.png"));
    item->setData(0,Qt::ToolTipRole,src_path);
    _root = item;
    RecursiveProTree(src_path,file_count,self,_root,item,nullptr);
    emit SigUpdateProgress(_file_count);
}

void OpenTreeThread::run()
{
    OpenProTree(_src_path,_file_count,_self);
    if(_bstop){
        auto path = dynamic_cast<ProTreeItem*>(_root)->GetPath();
        auto index = _self->indexOfTopLevelItem(_root);
        delete _self->takeTopLevelItem(index);
        QDir dir(path);
        return;
    }
    emit SigFinishProgress(_file_count);
}

void OpenTreeThread::RecursiveProTree(const QString &src_path, int &file_count,
                                      QTreeWidget *self, QTreeWidgetItem *root,
                                      QTreeWidgetItem *parent, QTreeWidgetItem *preItem)
{
    QDir src_dir(src_path);
    src_dir.setFilter(QDir::Dirs|QDir::Files|QDir::NoDotAndDotDot);
    src_dir.setSorting(QDir::Name);
    QFileInfoList list = src_dir.entryInfoList();
    for(int i=0;i<list.size();i++){
        if(_bstop){
            return;
        }
        QFileInfo fileinfo = list.at(i);
        bool bIsDir = fileinfo.isDir();
        if(bIsDir){
            if(_bstop){
                return;
            }
            file_count++;
            emit SigUpdateProgress(file_count);
            auto * item = new ProTreeItem(parent,fileinfo.fileName(),fileinfo.absoluteFilePath(),
                                         root,TreeItemDir);
            item->setData(0,Qt::DisplayRole,fileinfo.fileName());
            item->setData(0,Qt::DecorationRole,QIcon(":/icon/dir.png"));
            item->setData(0,Qt::ToolTipRole,fileinfo.absoluteFilePath());
            RecursiveProTree(fileinfo.absoluteFilePath(),file_count,
                             self,root,item,preItem);
        }
        else{
            if(_bstop){
                return;
            }
            const QString& suffix = fileinfo.completeSuffix();
            if(suffix!="png"&&suffix!="jpeg"&&suffix!="jpg"){
                continue;
            }
            file_count++;
            emit SigUpdateProgress(file_count);
            auto * item = new ProTreeItem(parent,fileinfo.fileName(),fileinfo.absoluteFilePath(),
                                         root,TreeItemPic);
            item->setData(0,Qt::DisplayRole,fileinfo.fileName());
            item->setData(0,Qt::DecorationRole,QIcon(":/icon/pic.png"));
            item->setData(0,Qt::ToolTipRole,fileinfo.absoluteFilePath());

            if(preItem){
                auto* pre_proitem = dynamic_cast<ProTreeItem*>(preItem);
                pre_proitem->SetNextItem(item);
            }
            item->SetPreItem(preItem);
            preItem = item;
        }
    }
}

void OpenTreeThread::SlotCancelProgress()
{
    this->_bstop=true;
}
