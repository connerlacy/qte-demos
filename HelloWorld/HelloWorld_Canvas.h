#ifndef HELLOWORLD_CANVAS_H
#define HELLOWORLD_CANVAS_H

#include "eio_qte_Include.h"

class HelloWorld_Canvas : public Canvas
{
    Q_OBJECT
public:
    explicit HelloWorld_Canvas(QWidget *parent = 0) :
        Canvas(parent) {}

    void draw();
    void setup();

    Mesh *mesh;

signals:

public slots:

};

#endif // HELLOWORLD_CANVAS_H
