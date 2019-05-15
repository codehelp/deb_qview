/*
    This package is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEB_QVIEW_H
#define DEB_QVIEW_H

#include <QApplication>
#include <QMainWindow>
#include <QTreeView>
#include <QTextBrowser>
#include <QStandardItemModel>

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
    QStandardItemModel *deb_model;
    void new_archive(void);
};

#endif // HELLOWINDOW_H
