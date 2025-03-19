#include "protreewidget.h"
#include <QDir>
#include "protreeitem.h"
#include "const.h"
#include <QHeaderView>
#include <QGuiApplication>
#include <QMenu>
#include <QFileDialog>

ProTreeWidget::ProTreeWidget(QWidget* parent):QTreeWidget(parent),_active_item(nullptr),
    _right_btn_item(nullptr),_dialog_progress(nullptr)
{
    this->header()->hide();
    connect(this,&ProTreeWidget::itemPressed,this,&ProTreeWidget::SlotItemPressed);
    _action_import=new QAction(QIcon(":/icon/import.png"),tr("导入文件"),this);
    _action_setstart=new QAction(QIcon(":/icon/core.png"),tr("设置活动项目"),this);
    _action_closepro=new QAction(QIcon(":/icon/close.png"),tr("关闭项目"),this);
    _action_slideshow=new QAction(QIcon(":/icon/slideshow.png"),tr("轮播图播放"),this);
    connect(_action_import,&QAction::triggered,this,&ProTreeWidget::Slotimport);
    connect(_action_setstart, &QAction::triggered,this,&ProTreeWidget::SlotSetActive);
}

void ProTreeWidget::AddProToTree(const QString &name, const QString &path)
{
    QDir dir(path);
    QString file_path = dir.absoluteFilePath(name);
    if(_set_path.find(file_path)!=_set_path.end())
    {
        return;
    }
    QDir pro_dir(file_path);
    if(!pro_dir.exists()){
        bool enable = pro_dir.mkpath(file_path);
        if(!enable){
            return;
        }
    }
    _set_path.insert(file_path);
    auto* item = new ProTreeItem(this,name,file_path,TreeItemPro);
    item->setData(0,Qt::DisplayRole,name);
    item->setData(0,Qt::DecorationRole,QIcon(":/icon/dir.png"));
    item->setData(0,Qt::ToolTipRole,file_path);
    this->addTopLevelItem(item);
}

void ProTreeWidget::SlotItemPressed(QTreeWidgetItem *pressedItem, int column)
{
    qDebug()<<"slotItemPressed"<<Qt::endl;
    if(QGuiApplication::mouseButtons()==Qt::RightButton){
        QMenu menu(this);
        int itemtype = pressedItem->type();
        if(itemtype == TreeItemPro){
            _right_btn_item = pressedItem;
            menu.addAction(_action_import);
            menu.addAction(_action_setstart);
            menu.addAction(_action_closepro);
            menu.addAction(_action_slideshow);
            menu.exec(QCursor::pos());
        }
    }
}

void ProTreeWidget::Slotimport()
{
    QFileDialog file_dialog;
    file_dialog.setFileMode(QFileDialog::Directory);
    file_dialog.setWindowTitle(tr("选择导入的文件夹"));
    QString path = "";
    if(!_right_btn_item){
        qDebug()<<"_right_btn_item is empty"<<Qt::endl;
        return;
    }
    path = dynamic_cast<ProTreeItem*>(_right_btn_item)->GetPath();
    file_dialog.setDirectory(path);
    file_dialog.setViewMode(QFileDialog::Detail);

    QStringList filenames;
    if(file_dialog.exec()){
        filenames=file_dialog.selectedFiles();
    }

    if(filenames.length()<=0){
        return;
    }
    QString import_path = filenames.at(0);
    int file_count = 0;
    _dialog_progress=new QProgressDialog(this);
    _thread_create_pro = std::make_shared<ProTreeThread>(std::ref(import_path),std::ref(path),_right_btn_item,
                                                         file_count,this,_right_btn_item,nullptr);
    connect(_thread_create_pro.get(),&ProTreeThread::SigUpdateProgress,
            this,&ProTreeWidget::SlotUpdateProgress);
    connect(_thread_create_pro.get(),&ProTreeThread::SigFinishProgress,
            this,&ProTreeWidget::SlotFinishProgress);
    connect(_dialog_progress,&QProgressDialog::canceled,this,&ProTreeWidget::SlotCancelProgress);
    connect(this,&ProTreeWidget::SigCancelProgress,_thread_create_pro.get(),&ProTreeThread::SlotCancelProgress);

    _thread_create_pro->start();
    _dialog_progress->setWindowTitle("please wait");
    _dialog_progress->setFixedWidth(PROGRESS_WIDTH);
    _dialog_progress->setRange(0,PROGRESS_WIDTH);

    _dialog_progress->exec();
}

void ProTreeWidget::SlotUpdateProgress(int count)
{
    if(!_dialog_progress){
        return;
    }

    if(count>=PROGRESS_MAX){
        _dialog_progress->setValue(count%PROGRESS_MAX);
    }else{
        _dialog_progress->setValue(count);
    }
}

void ProTreeWidget::SlotFinishProgress()
{
    _dialog_progress->setValue(PROGRESS_MAX);
    _dialog_progress->deleteLater();
}

void ProTreeWidget::SlotCancelProgress()
{
    emit SigCancelProgress();
    delete _dialog_progress;
    _dialog_progress = nullptr;
}

void ProTreeWidget::SlotSetActive()
{
    if(!_right_btn_item){
        return;
    }

    QFont nullFont;
    nullFont.setBold(false);
    if(_active_item){
        _active_item->setFont(0,nullFont);
    }
    _active_item=_right_btn_item;
    nullFont.setBold(true);
    _active_item->setFont(0,nullFont);
}
