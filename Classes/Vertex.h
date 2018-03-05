/*! \class Vertex
    \brief  vertex  consists of a tuple of x,y,z coordinate 
*/

#pragma once;
#include<tuple> 

class Vertex{
    public:
    std::tuple<float,float,float> V; ///< V represents a vertex and  it is in the form tuple of x,y,z coordinates 
   
    };