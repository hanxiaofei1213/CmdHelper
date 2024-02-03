#include "CmdHelper.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CmdHelper w;
    w.show();
    return a.exec();
}
