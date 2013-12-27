#include "sample.h"
#include <QDebug>
Sample::Sample(QObject *parent) :
    QObject(parent)
{


}

void Sample::printMe()
{
    qDebug() <<"hello";
}
