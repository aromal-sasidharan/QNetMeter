#ifndef QNETMETERWINDOW_H
#define QNETMETERWINDOW_H

#include <QMainWindow>

namespace Ui {
class QNetMeterWindow;
}

class QNetMeterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QNetMeterWindow(QWidget *parent = 0);
    ~QNetMeterWindow();

private:
    Ui::QNetMeterWindow *ui;
};

#endif // QNETMETERWINDOW_H
