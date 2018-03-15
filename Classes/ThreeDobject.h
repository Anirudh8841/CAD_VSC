

#ifndef THREEDOBJECT_H
#define THREEDOBJECT_H

#include "Vertex.h"

class ThreeDobject{
    public: 
        std::list<Vertex> VertexList;
        std::list<std::tuple<Vertex, Vertex > > EdgeList;
        std::list<std::tuple<Vertex, Vertex, Vertex > > FaceList;
};

#endif
