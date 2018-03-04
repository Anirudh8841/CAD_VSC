
/*! \class 3Dobject
    \brief  the Class 3Dobject is used for storing 3dobjects and this class consists of list of vertices, edges and faces.
*/

#pragma once;

#include "Vertex"

class 3Dobject: public Object{
    public:
    std::list<Vertex> listOfVertices;///< listofvertices used to store all the vertices of the 3d object in the form of list of vertices
    std::list<std::tuple<Vertex,Vertex>> listOfEdges;///< listofEdges used to store all the edges of the 3d object in the form of list of tuples of tw0 vertices
    std::list<std::list<Vertex>> listOfFaces;///<   listoffaces used to store all the faces of the 3d object in the form of listof list of vertices
}
