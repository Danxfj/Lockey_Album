#ifndef OPENTREETHREAD_H
#define OPENTREETHREAD_H
#include <QTreeWidget>
#include <QThread>

class OpenTreeThread : public QThread
{
    Q_OBJECT
public:
    explicit OpenTreeThread(const QString& src_path,int file_count,
                            QTreeWidget* self,QObject *parent = nullptr);
    void OpenProTree(const QString& src_path,int& file_count,QTreeWidget* self);
protected:
    virtual void run();
private:
    void RecursiveProTree(const QString& src_path,int& file_count,QTreeWidget* self,
                          QTreeWidgetItem* root,QTreeWidgetItem* parent,QTreeWidgetItem* preItem);
    QString _src_path;
    int _file_count;
    QTreeWidget* _self;
    bool _bstop;
    QTreeWidgetItem * _root;
signals:
    void SigFinishProgress(int);
    void SigUpdateProgress(int);
public slots:
    void SlotCancelProgress();
};

#endif // OPENTREETHREAD_H
