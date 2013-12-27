#include "qnetmeterwindow.h"
#include <QApplication>
#include <core/networkutils.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug()<<"active interfaces are \n"<<NetworkUtils::getActiveInterfaces();
    QNetMeterWindow w;
    w.show();

    return a.exec();
}
