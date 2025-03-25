#include "slideshowdlg.h"
#include "ui_slideshowdlg.h"
#include "prelistwid.h"
#include "protreewidget.h"
#include <QFileDialog>
#include <QAudioOutput>

SlideShowDlg::SlideShowDlg(QWidget *parent,QTreeWidgetItem* first_item,
                           QTreeWidgetItem* last_item)
    : QDialog(parent),_first_item(first_item),_last_item(last_item)
    , ui(new Ui::SlideShowDlg)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    ui->slidepreBtn->SetIcons(":/icon/previous.png",
                              ":/icon/previous_hover.png",
                              ":/icon/previous_press.png");
    ui->slidenextBtn->SetIcons(":/icon/next.png",
                               ":/icon//next_hover.png",
                               ":/icon/next_press.png");
    ui->closeBtn->SetIcons(":/icon/closeshow.png",
                           ":/icon/closeshow_hover.png",
                           ":/icon/closeshow_press.png");
    ui->palyBtn->SetIcons(":/icon/play.png",
                          ":/icon/play_hover.png",
                          ":/icon/play_press.png",
                          ":/icon/pause.png",
                          ":/icon/pause_hover.png",
                          ":/icon/pause_press.png");
    connect(ui->closeBtn,&QPushButton::clicked,this,&SlideShowDlg::close);
    connect(ui->slidenextBtn,&QPushButton::clicked,this,&SlideShowDlg::SlotSlideNext);
    connect(ui->slidepreBtn,&QPushButton::clicked,this,&SlideShowDlg::SlotSlidePre);

    auto* prelistwid = dynamic_cast<PreListWid*>(ui->preListWidget);
    connect(ui->picAnimation,&PicAnimationWid::SigUpPreList,prelistwid,&PreListWid::SlotUpPreList);
    connect(ui->picAnimation,&PicAnimationWid::SigSelectItem,prelistwid,&PreListWid::SlotUpSelect);

    connect(prelistwid,&PreListWid::SigUpSelectShow,
            ui->picAnimation,&PicAnimationWid::SlotUpSelectShow);

    connect(ui->palyBtn,&PicStateBtn::clicked,ui->picAnimation,
            &PicAnimationWid::SlotStartOrStop);
    connect(ui->picAnimation,&PicAnimationWid::SigStart,ui->palyBtn,&PicStateBtn::SlotStart);
    connect(ui->picAnimation,&PicAnimationWid::SigStop,ui->palyBtn,&PicStateBtn::SlotStop);

    auto* _protree_widget = dynamic_cast<ProTreeWidget*>(parent);
    connect(ui->picAnimation,&PicAnimationWid::SigStartMusic,
            _protree_widget,&ProTreeWidget::SlotStartMusic);

    connect(ui->picAnimation,&PicAnimationWid::SigStopMusic,
            _protree_widget,&ProTreeWidget::SlotStopMusic);


    /*connect(_player, &QMediaPlayer::errorOccurred, this, [](QMediaPlayer::Error error, const QString &errorString) {
        qDebug() << "Error:" << error << errorString;
    });
    // 检查媒体状态
    connect(_player, &QMediaPlayer::mediaStatusChanged, this, [](QMediaPlayer::MediaStatus status) {
        qDebug() << "Media status:" << status;
    });

    qDebug()<<_player->playbackState();*/


    ui->picAnimation->setPixmap(_first_item);

    ui->picAnimation->Start();
}

SlideShowDlg::~SlideShowDlg()
{
    delete ui;
}

void SlideShowDlg::SlotSlideNext()
{
    ui->picAnimation->SlideNext();
}

void SlideShowDlg::SlotSlidePre()
{
    ui->picAnimation->SlidePre();
}



