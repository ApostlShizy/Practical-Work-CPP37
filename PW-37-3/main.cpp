#include "rcontrtoller.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RContrtoller conrtoller;
    conrtoller.show();
    return a.exec();
}
