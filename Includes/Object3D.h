#ifndef THREEDOBJECT_H
#define THREEDOBJECT_H

#include <vector>
using namespace std;
typedef std::vector<float> Vertex;
class Object3D{
    public: 
        std::vector<std::vector<float> > VertexList;
        std::vector<std::vector<int> > EdgeList;
        std::vector<std::vector<int> > FaceList;
};
#endif