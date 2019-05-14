#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTreeView>
#include <QTextBrowser>

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
    void on_action_New_triggered();

    void on_action_Open_triggered();

    void on_action_Close_triggered();

    void on_action_Help_triggered();

private:
    Ui::HelloWindow *ui;
    QStatusBar * status;
    QTreeView * fileviewer;
    QTextBrowser * contentviewer;
};

#endif // HELLOWINDOW_H
