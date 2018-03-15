#include "Vertex.h"


class Object{
    public: 
        std::list<Vertex> VertexList;
        std::list<std::tuple<Vertex, Vertex > > EdgeList;
};

