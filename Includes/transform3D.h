#ifndef TRANSFORM3D_H
#define TRANSFORM3D_H

#include "Object3D.h"
#include "Object2D.h"


/*! This function traces back the 3D object whose orthographic views are given
* \param object 2D object whose re-construction is required.
* \return A 3D object corresponding to orthographic views.
*/
std::vector<vector<float> > OrthographicConv(Object2D object);
Object3D convert2DTo3D (Object2D object);
#endif