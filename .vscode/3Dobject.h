
/*! \class 3Dobject
    \brief  the Class 3Dobject is used for storing 3dobjects and this class consists of list of vertices, edges and faces.
*/

#pragma once;

#include "Edge"
#include "Face"

class 3Dobject extend{
    public:
    std::list<Vertex> listOfVertices;///< listofvertices used to store all the vertices of the 3d object in the form of list
    std::list<Edge> listOfEdges;///< listofEdges used to store all the vertecies of the 3d object in the form of list
    std::list<Vertex> listOfFaces;///<   listoffaces used to store all the faces of the 3d object in the form of list
}