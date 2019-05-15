#include <QStandardItemModel>
#include "deb_qview.h"
#include "ui_hellowindow.h"

deb_qview::deb_qview(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::deb_qview) {

    ui->setupUi(this);
    this->status = findChild<QStatusBar *>("statusBar");
    this->status->showMessage(QString("Version: ") + QString(GIT_VERSION));

    ui->action_New->setIcon(this->style()->standardIcon(QStyle::SP_FileIcon));
    ui->action_Open->setIcon(this->style()->standardIcon(QStyle::SP_DialogOpenButton));
    ui->action_Close->setIcon(this->style()->standardIcon(QStyle::SP_DialogCloseButton));
    ui->action_Help->setIcon(this->style()->standardIcon(QStyle::SP_DialogHelpButton));


    this->fileviewer = findChild<QTreeView *>("treeView");
    if (not this->fileviewer) {
        qDebug("No fileviewer child found! aborting.");
        abort();
    }

    this->contentviewer = findChild<QTextBrowser *>("contentviewer");
    if (not this->contentviewer) {
        qDebug("No content viewer child found! aborting.");
        abort();
    }
    QStandardItemModel *model = new QStandardItemModel( 4, 3, this );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Package"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Size"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Location"));

    for( int r=0; r < 4; r++ ) {
        QString sstr = "[ " + QString::number(r) + " ]";
        QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
        model->setItem(r, 0, item);
    }

    this->fileviewer->setModel(model);
}

deb_qview::~deb_qview() {
    delete ui;
}

void deb_qview::on_action_New_triggered()
{
    return;
}

void deb_qview::on_action_Open_triggered()
{
    return;
}

void deb_qview::on_action_Close_triggered()
{
    QApplication::quit ();
}

void deb_qview::on_action_Help_triggered()
{
    return;
}
