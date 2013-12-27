#ifndef NETWORKUTILS_H
#define NETWORKUTILS_H

#include <QObject>
#include <QList>
#include <QtNetwork/qnetworkinterface.h>
class QNetworkInterface;

class NetworkUtils : public QObject
{
    Q_OBJECT
public:
    explicit NetworkUtils(QObject *parent = 0);
    static bool isActiveNetworkInterface(QNetworkInterface networkInterface);
    static QList<QNetworkInterface> getActiveInterfaces();
signals:

public slots:

};

#endif // NETWORKUTILS_H
