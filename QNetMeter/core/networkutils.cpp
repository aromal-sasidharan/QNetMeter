#include "networkutils.h"
#include <QDebug>


NetworkUtils::NetworkUtils(QObject *parent) :
    QObject(parent)
{
}
bool NetworkUtils::isActiveNetworkInterface(QNetworkInterface networkInterface)
{
    QNetworkInterface::InterfaceFlags flags(networkInterface.flags());

    return (flags&QNetworkInterface::IsUp)&&(flags&QNetworkInterface::IsRunning)&&
            !(flags&QNetworkInterface::IsLoopBack);


}
QList<QNetworkInterface> NetworkUtils::getActiveInterfaces()
{
    QList<QNetworkInterface> networkInterfaces = QNetworkInterface::allInterfaces();
    QList<QNetworkInterface> activeNetworkInterfaces;

    foreach (QNetworkInterface networkInterface, networkInterfaces) {

        if(NetworkUtils::isActiveNetworkInterface(networkInterface))
        {


            activeNetworkInterfaces.append(networkInterface);
        }

    }
    return activeNetworkInterfaces;
}


