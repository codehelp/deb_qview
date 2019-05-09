#include "hellowindow.h"
#include "ui_hellowindow.h"

HelloWindow::HelloWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloWindow)
{
    ui->setupUi(this);
    this->text_area = findChild<QTextEdit *>("textEdit");
    this->status = findChild<QStatusBar *>("statusBar");
}

HelloWindow::~HelloWindow()
{
    delete ui;
}

void HelloWindow::on_spinBox_valueChanged(int value)
{
    this->text_area->setText(QString::number(value));
    this->status->showMessage(QString::number(value));
}
