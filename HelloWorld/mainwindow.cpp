#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    canvas = new HelloWorld_Canvas(this);
    canvas->resize(this->size());
    canvas->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
