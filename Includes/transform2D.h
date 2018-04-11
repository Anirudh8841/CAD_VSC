#ifndef TRANSFORM2D_H
#define TRANSFORM2D_H

#include "Object3D.h"
#include "Object2D.h"



/*! This function convertes the 3D object into its orthographic views
* \param object 3D object whose views are to be obtained
* \return A 2D object corresponding to 3D object.
*/
Object2D convert3DTo2D (Object3D object);
#endif