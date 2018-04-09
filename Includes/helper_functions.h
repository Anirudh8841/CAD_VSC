#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include "Object3D.h"
#include "Object2D.h"

std::vector<std<::vector <float> > sortVertices (std::vector<std::vector<float> > vertexList);


// This function returns the vertices with all the three coordinates built using the two of the three views.
std::vector<std<::vector<float> > vertices2DTo3D (std::vector<std::vector<float> > Topverlist, 
	std::vector<std::vector<float> > frontverlist, std::vector<std::vector<float> > sideverlist);

// This function returns the possible edges from the edge list in top, front and side view
std::vector<std::vector<int> > pEdgeList(View2D topView, 
	View2D frontView , View2D sideEdgeList);
#endif