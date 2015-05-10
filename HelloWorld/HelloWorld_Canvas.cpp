#include "HelloWorld_Canvas.h"

void HelloWorld_Canvas::setup()
{
    mesh = new Mesh;
    mesh->makeSphere(1,20,20);
}

void HelloWorld_Canvas::draw()
{
    mesh->drawMesh();
}
