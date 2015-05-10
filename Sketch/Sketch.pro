#-------------------------------------------------
#
# Project created by QtCreator 2015-05-09T17:03:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sketch
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Sketch_Canvas.cpp

HEADERS  += mainwindow.h \
    Sketch_Canvas.h

FORMS    += mainwindow.ui

#---------------- eio_qte
EIO_SDK_QT_PATH = /Users/connerlacy/Documents/emergent.io/Repositories/eio_qte/trunk
include($$EIO_SDK_QT_PATH/eio_qte.pri)
