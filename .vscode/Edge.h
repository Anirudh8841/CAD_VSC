/*! \class Edge
    \brief CLass edge is used for storing edges in a given object stored in the form of tuple of two vertices and length of the edge 
*/
#pragma once;
#include "Vertex"

class Edge{
    public:
    std::tuple<Vertex,Vertex,int> E;///< E is a tuple of two vertices and length used for representing an edge 
   
    };