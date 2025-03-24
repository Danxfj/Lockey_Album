#include "prelistwid.h"
#include "protreeitem.h"
#include "const.h"
#include <QPainter>
#include "prelistitem.h"

PreListWid::PreListWid(QWidget *parent):_global(0),QListWidget(parent)
{
    this->setViewMode(QListWidget::IconMode);
    this->setIconSize(QSize(PREICON_SIZE,PREICON_SIZE));
    this->setSpacing(5);
}

PreListWid::~PreListWid()
{

}

void PreListWid::AddListItem(const QString &path)
{
    QPixmap src_pixmap(path);
    src_pixmap = src_pixmap.scaled(PREICON_SIZE, PREICON_SIZE,Qt::KeepAspectRatio);
    QPixmap dst_pixmap(QSize(PREICON_SIZE,PREICON_SIZE));

    dst_pixmap.fill(QColor(220,220,220,50));
    QPainter painter(&dst_pixmap);

    auto src_width = src_pixmap.width();
    auto src_height = src_pixmap.height();

    auto dst_width = dst_pixmap.width();
    auto dst_height = dst_pixmap.height();
    auto x = (dst_width-src_width)/2;
    auto y = (dst_height-src_height)/2;

    painter.drawPixmap(x,y,src_pixmap);
    _global++;
    PreListItem* pItem = new PreListItem(QIcon(dst_pixmap),path,_global,this);
    pItem->setSizeHint(QSize(PREITEM_SIZE,PREITEM_SIZE));
    this->addItem(pItem);
    _set_items[path]=pItem;
    if(_global==1){
        _pos_origin = this->pos();
    }
}

void PreListWid::SlotUpPreList(QTreeWidgetItem *tree_item)
{
    if(!tree_item){
        qDebug()<<"tree_item is empty"<<Qt::endl;
        return;
    }

    auto* pro_item = dynamic_cast<ProTreeItem*>(tree_item);
    auto path = pro_item->GetPath();
    auto iter = _set_items.find(path);
    if(iter!=_set_items.end()){
        qDebug()<<"path"<<path<<"already exists"<<Qt::endl;
        return;
    }

    AddListItem(path);

}

void PreListWid::SlotUpSelect(QTreeWidgetItem *tree_item)
{

}
