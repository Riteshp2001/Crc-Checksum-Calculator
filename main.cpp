#include "crcCalculate.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    crcCalculate w;
    w.show();
    return a.exec();
}
