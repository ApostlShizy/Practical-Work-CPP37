#include "calclualator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calclualator w;
    w.show();
    return a.exec();
}
