#include "deb_qview.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    deb_qview w;
    w.show();

    return a.exec();
}
