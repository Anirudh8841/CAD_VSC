
#ifndef TWODOBJECT_H
#define TWODOBJECT_H

#include "Vertex.h"


class TwoDobject{
    public: 
        std::list<Vertex> VertexList;
        std::list<std::tuple<Vertex, Vertex > > EdgeList;
};


#endif

