#include "hellowindow.h"
#include "ui_hellowindow.h"

HelloWindow::HelloWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloWindow)
{
    ui->setupUi(this);
    this->status = findChild<QStatusBar *>("statusBar");
    this->status->showMessage(QString("Version: ") + QString(GIT_VERSION));
}

HelloWindow::~HelloWindow()
{
    delete ui;
}
