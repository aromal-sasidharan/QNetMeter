#ifndef SAMPLE_H
#define SAMPLE_H

#include <QObject>

class Sample : public QObject
{
    Q_OBJECT
public:
    explicit Sample(QObject *parent = 0);
    static void printMe();

signals:

public slots:

};

#endif // SAMPLE_H
