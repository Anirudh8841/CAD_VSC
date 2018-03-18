

#ifndef OBJECT_H
#define OBJECT_H



class Object{
    public: 
        std::list<Vertex> VertexList;
        std::list<std::tuple<Vertex, Vertex > > EdgeList;
};

#endif
