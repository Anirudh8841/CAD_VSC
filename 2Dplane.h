/*! \class 2DPlane
    \brief class 2Dplane is used for storing a 2dplane in the form of list of vertices 
*/
#pragma once;
#include <list>
#include "Vertex"

class 2Dplane(){
public:
 std::list<Vertex> listOf2dplaneVertices;///< list of 2dvertices is in the form of list used for storing all the vertices of a 2d object
   
};