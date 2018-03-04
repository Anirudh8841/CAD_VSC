
//! \class 3Dobject 
    /*!
    * \param vertex_list a Vertex list arguement.
    * \return Returns a  3D object
    * The function generate_3D_object takes vertex list and forms edges and faces list to form a convex polyhedron object
    */

#pragma once;
#include <list>
#include "Vertex"
#include "Edge"
#include "Face"

class 3Dobject{
    std::list<Vertex> listOfVertices;
    std::list<Edge> listOfEdges;
    std::list<Vertex> listOfFaces;
}