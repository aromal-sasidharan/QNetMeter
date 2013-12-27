#include "qnetmeterwindow.h"
#include "ui_qnetmeterwindow.h"

QNetMeterWindow::QNetMeterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QNetMeterWindow)
{
    ui->setupUi(this);
}

QNetMeterWindow::~QNetMeterWindow()
{
    delete ui;
}
