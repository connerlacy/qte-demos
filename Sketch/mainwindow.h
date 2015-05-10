#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "Sketch_Canvas.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Sketch_Canvas *canvas;

private:
    Ui::MainWindow *ui;
    void resizeEvent(QResizeEvent *);
};

#endif // MAINWINDOW_H
