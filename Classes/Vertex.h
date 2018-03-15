/*! \class Vertex
    \brief  vertex  consists of a tuple of x,y,z coordinate 
*/

#ifndef VERTEX_H
#define VERTEX_H

#include<tuple> 
#include<list>

class Vertex{
    public:
    std::tuple<float,float,float> V; ///< V represents a vertex and  it is in the form tuple of x,y,z coordinates 
   
    };

#endif
