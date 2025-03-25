#ifndef PROTREEWIDGET_H
#define PROTREEWIDGET_H

#include <QTreeWidget>
#include <QAction>
#include <QProgressDialog>
#include "protreethread.h"
#include "opentreethread.h"
#include <QtMultimedia/QMediaPlayer>

class SlideShowDlg;


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
    QTreeWidgetItem* _selected_item;
    QAction* _action_import;
    QAction* _action_setstart;
    QAction* _action_closepro;
    QAction* _action_slideshow;
    QProgressDialog* _dialog_progress;
    QProgressDialog* _open_progressdlg;
    std::shared_ptr<ProTreeThread> _thread_create_pro;
    std::shared_ptr<OpenTreeThread> _thread_open_pro;
    std::shared_ptr<SlideShowDlg> _slide_show_dlg;
    QMediaPlayer * _player;
    QAudioOutput *_audioOutput;
    QList<QUrl> _playlist;   //存储媒体文件路径
    int _currentIndex = -1;  //当前播放项索引
    bool _loopEnabled = true;  //是否循环播放

private:
    //void playNext();   //自己写的播放下一首音乐
    void setLoopMode(bool enable);  //是否循环播放
private slots:
    void SlotItemPressed(QTreeWidgetItem* pressedItem,int column);

    void SlotDoubleClickedItem(QTreeWidgetItem* doubleitem,int col);
    void Slotimport();
    void SlotClosePro();
    void SlotUpdateProgress(int count);
    void SlotFinishProgress();
    void SlotCancelProgress();
    void SlotSetActive();

    void SlotUpdateOpenProgress(int count);
    void SlotFinishOpenProgress();
    void SlotCancelOpenProgress();

    void SlotSlideShow();
public slots:
    void SlotOpenPro(const QString& path);
    void SlotNextShow();
    void SlotPreShow();
    void SlotSetMusic();
    void SlotStartMusic();
    void SlotStopMusic();
signals:
    void SigCancelProgress();
    void SigCancelOpenProgress();
    void SigUpdateSelected(const QString& );
    void SigUpdatePic(const QString& );
    void SigClearSelected();
};

#endif // PROTREEWIDGET_H
