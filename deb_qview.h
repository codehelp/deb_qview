#ifndef DEB_QVIEW_H
#define DEB_QVIEW_H

#include <QApplication>
#include <QMainWindow>
#include <QTreeView>
#include <QTextBrowser>

namespace Ui {
class deb_qview;
}

class deb_qview : public QMainWindow
{
    Q_OBJECT
    bool changed;
public:
    explicit deb_qview(QWidget *parent = nullptr);
    ~deb_qview();

private slots:
    void on_action_New_triggered();

    void on_action_Open_triggered();

    void on_action_Close_triggered();

    void on_action_Help_triggered();

    void on_action_About_triggered();

private:
    Ui::deb_qview *ui;
    QStatusBar * status;
    QTreeView * fileviewer;
    QTextBrowser * contentviewer;
};

#endif // HELLOWINDOW_H
