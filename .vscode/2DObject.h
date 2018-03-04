
#pragma once;
#include <list>
#include "Vertex"
#include "Edge"
#include "Face"



class 2Dobject: public Object{
    public:
    std::list<Vertex> listOfVertices;
    std::list<Edge> listOfEdges;
};