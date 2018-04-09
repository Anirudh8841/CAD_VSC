#pragma once;
#include "ThreeDobject"

/*! This function takes vertex list and forms the edge and face list out of it. 
*   \param vertex_list List of vertices in an object
*   \return An object of class 3DObject formed by the input vertex_list and face and edge lists formed derived from it.
*/
ThreeDobject generate_3Dobject(std::list<Vertex> vertex_list);
