#-------------------------------------------------
#
# Project created by QtCreator 2015-05-02T12:13:28
#
#-------------------------------------------------

QT       += core gui

QT  += core gui
QT  += opengl
QT  += serialport
QT  += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    HelloWorld_Canvas.cpp

HEADERS  += mainwindow.h \
    HelloWorld_Canvas.h

FORMS    += mainwindow.ui


#---------------- eio_qte
EIO_SDK_QT_PATH = /Users/connerlacy/Documents/emergent.io/Repositories/eio_qte/trunk
include($$EIO_SDK_QT_PATH/eio_qte.pri)
