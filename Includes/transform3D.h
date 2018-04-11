#ifndef TRANSFORM3D_H
#define TRANSFORM3D_H

#include "Object3D.h"
#include "Object2D.h"

std::vector<vector<float> > OrthographicConv(Object2D object);
Object3D convert2DTo3D (Object2D object);
#endif