#ifndef VIEW2D_H
#define VIEW2D_H

//! An Object2D class
/*! The class view2D consists of vertex list and edge list as objects  
 * Its is used to store the  vertices and edges of the two-dimensional object 
 */
#include "View2D.h"
class View2D{
    public: 
        std::vector<std::vector<float> > vertexList;/**<  VertexList */
        std::vector<std::vector<int> > edgeList;/**<  EdgesList */
};

#endif