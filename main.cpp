#include <QApplication>
#include "system.h"

SYSTEM * sys;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sys = new SYSTEM();
    sys->show();
    return a.exec();
}
