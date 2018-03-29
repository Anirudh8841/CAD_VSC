

#ifndef THREEDOBJECT_H
#define THREEDOBJECT_H
#include <vector>

typedef std::vector<float> Vertex;

class ThreeDobject{
    public: 
        std::vector<Vertex> VertexList;
        std::vector<std::std::vector<Vertex> > EdgeList;
        std::vector<std::vector<Vertex> > FaceList;
};

#endif
