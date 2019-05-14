#include <QStandardItemModel>
#include "hellowindow.h"
#include "ui_hellowindow.h"

HelloWindow::HelloWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloWindow)
{
    ui->setupUi(this);
    this->status = findChild<QStatusBar *>("statusBar");
    this->status->showMessage(QString("Version: ") + QString(GIT_VERSION));

    this->fileviewer = findChild<QTreeView *>("treeView");
    QStandardItemModel *model = new QStandardItemModel( 4, 3, this );
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Package"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Size"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Location"));

    for( int r=0; r < 4; r++ )
    {
            QString sstr = "[ " + QString::number(r) + " ]";
            QStandardItem *item = new QStandardItem(QString("Idx ") + sstr);
            model->setItem(r, 0, item);
    }

    this->fileviewer->setModel(model);
}

HelloWindow::~HelloWindow()
{
    delete ui;
}
