#ifndef SKETCH_CANVAS_H
#define SKETCH_CANVAS_H

#include "eio_qte_Include.h"

class Sketch_Canvas : public Canvas
{
    Q_OBJECT
public:
    explicit Sketch_Canvas(QWidget *parent = 0) : Canvas(parent) {}

    void setup();
    void draw();

};

#endif // SKETCH_CANVAS_H
