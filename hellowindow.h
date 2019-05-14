#ifndef HELLOWINDOW_H
#define HELLOWINDOW_H

#include <QMainWindow>
#include <QTreeView>

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

private:
    Ui::HelloWindow *ui;
    QStatusBar * status;
    QTreeView * fileviewer;
};

#endif // HELLOWINDOW_H
