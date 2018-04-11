#ifndef THREEDOBJECT_H
#define THREEDOBJECT_H

//! Class for 3D object. 
/*! The class Object3D  consists of vertex list , edge list and facelist as objects in it.  
 *  Its is used to store the  vertices , edges and faces of the 3d object in the form of vertexlist ,edgelist
 *  and facelist. 
 */

#include <vector>
using namespace std;
typedef std::vector<float> Vertex;
class Object3D{
    public: 

        std::vector<std::vector<float> > VertexList;/**<  VertexList */
        std::vector<std::vector<int> > EdgeList;/**<   EdgesList */
        std::vector<std::vector<int> > FaceList;/**< FacesList */
};
#endif