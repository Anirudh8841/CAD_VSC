#pragma once;
#include <list>
#include "Vertex"
#include "Edge"
#include "Face"

class 3Dobject{
    public:
    std::list<Vertex> listOfVertices;
    std::list<Edge> listOfEdges;
    std::list<Vertex> listOfFaces;
}