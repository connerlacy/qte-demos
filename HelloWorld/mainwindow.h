#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "eio_qte_Include.h"

#include "HelloWorld_Canvas.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MidiInput *mi;

    HelloWorld_Canvas *canvas;


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
