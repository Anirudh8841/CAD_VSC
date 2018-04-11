
#ifndef OBJECT2D_H
#define OBJECT2D_H


//! Structured to accomodate top, front and side views of the object.
/*! The class Object2D  consists of Three View2D types :TopView ,FrontView and SideView as objects in it.  
 *  Its is used to store the  vertices,edges and faces of the 3d object in the form of vertexlist ,edgelist
 *  and facelist. 
 */
#include "View2D.h"
class Object2D{
    public: 
        View2D topView;/**<  View2D  Topview */
        View2D frontView;/**<  View2D FrontView */
        View2D sideView;/**<  View2D SideView */
};

#endif
