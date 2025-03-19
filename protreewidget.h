#ifndef PROTREEWIDGET_H
#define PROTREEWIDGET_H

#include <QTreeWidget>
#include <QAction>
#include <QProgressDialog>
#include "protreethread.h"

class ProTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    ProTreeWidget(QWidget* parent = nullptr);
    void AddProToTree(const QString& name,const QString& path);
private:
    QSet<QString> _set_path;
    //右键单击某个item之后弹出菜单
    QTreeWidgetItem* _right_btn_item;
    QTreeWidgetItem* _active_item;
    QAction* _action_import;
    QAction* _action_setstart;
    QAction* _action_closepro;
    QAction* _action_slideshow;
    QProgressDialog* _dialog_progress;
    std::shared_ptr<ProTreeThread> _thread_create_pro;
private slots:
    void SlotItemPressed(QTreeWidgetItem* pressedItem,int column);
    void Slotimport();
    void SlotUpdateProgress(int count);
    void SlotFinishProgress();
    void SlotCancelProgress();
    void SlotSetActive();
signals:
    void SigCancelProgress();
};

#endif // PROTREEWIDGET_H
