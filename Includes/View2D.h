#ifndef VIEW2D_H
#define VIEW2D_H


/*!
* \author Ankush shaw 
* \author Anirudh Kammampathy
* \version 1.0
* \date 26-02-2018 
* \warning Implementation is yet to be taken up. Code structure might change here and there at completion. This is the proposed structure.
* \mainpage Computer Aided Design: Draw and Visualize
* \section Functionality Overview
*   -# Draw 3D and 2D objects interactively.
*   -# As of version 1.0, implementation supports family of convex polyhedrals
*   -# Save and load from a file
*   -# Tranform between different views
*       - Oblique 3D to isometric and back
        - Isometric to orthographic views and back
* 
* \section Installation
* \subsection Build from source code using cmake and make 
*    -# run make

*/

//! Accomodates a single orthographic view
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