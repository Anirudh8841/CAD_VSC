#pragma once;
#include "2Dplane"


/*! This function takes a plane, computes the cross product amongst the vertices of the plane and returns the direction cosine of the normal to the plane.
* \param inputplane plane whose normal is to be computed
* \return tuple of order 3
*/
std::tuple<float,float,float> normaldirection(2Dplane inputplane);

