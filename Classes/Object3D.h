

#ifndef THREEDOBJECT_H
#define THREEDOBJECT_H

#include "Vertex.h"

type std::vector<float>(3) Vertex;
class ThreeDobject{
    public: 
        std::vector<Vertex> VertexList;
        std::vector<std::std::vector<Vertex>(2)> EdgeList;
        std::vector<std::vector<Vertex>> FaceList;
};

#endif
