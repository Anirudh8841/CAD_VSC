

#ifndef NORMALDIRECTION_H
#define NORMALDIRECTION_H

#include "TwoDobject.h"


/*! This function takes a plane, computes the cross product amongst the vertices of the plane and returns the direction cosine of the normal to the plane.
* \param inputplane plane whose normal is to be computed
* \return tuple of order 3
*/
std::tuple<float,float,float> normaldirection(TwoDobject inputplane);


#endif


