#include "qnetmeterwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QNetMeterWindow w;
    w.show();

    return a.exec();
}
