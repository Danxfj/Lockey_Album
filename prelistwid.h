#ifndef PRELISTWID_H
#define PRELISTWID_H

#include <QListWidget>
#include <QTreeWidgetItem>

class PreListWid : public QListWidget
{
public:
    PreListWid(QWidget *parent = nullptr);
    virtual ~PreListWid();
private:
    QMap<QString,QListWidgetItem*> _set_items;
    void AddListItem(const QString& path);
    int _global;
    QPoint _pos_origin;
public slots:
    void SlotUpPreList(QTreeWidgetItem* tree_item);

};

#endif // PRELISTWID_H
