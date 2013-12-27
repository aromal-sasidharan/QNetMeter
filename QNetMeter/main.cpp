#include "qnetmeterwindow.h"
#include <QApplication>
#include <core/sample.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sample::printMe();
    QNetMeterWindow w;
    w.show();

    return a.exec();
}
