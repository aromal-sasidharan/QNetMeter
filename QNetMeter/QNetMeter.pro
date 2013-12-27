#-------------------------------------------------
#
# Project created by QtCreator 2013-12-27T23:22:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QNetMeter
TEMPLATE = app


SOURCES += main.cpp\
        qnetmeterwindow.cpp\
        core/sample.cpp

HEADERS  += qnetmeterwindow.h \
    core/sample.h

FORMS    += qnetmeterwindow.ui
