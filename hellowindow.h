#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include <QMainWindow>
#include <QTextEdit>

namespace Ui {
class HelloWindow;
}

class HelloWindow : public QMainWindow
{
    Q_OBJECT
    bool changed;
public:
    explicit HelloWindow(QWidget *parent = nullptr);
    ~HelloWindow();

private slots:
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::HelloWindow *ui;
    QTextEdit * text_area;
    QStatusBar * status;
};

#endif // HELLOWINDOW_H
