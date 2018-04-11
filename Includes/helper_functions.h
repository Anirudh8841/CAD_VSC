#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include "Object3D.h"
#include "Object2D.h"



/*! This function sorts vertices either 3D or 2D in the ascending order.
* \param vertexList List of vertices to be arranged
* \return Vertices arranged in the ascending order
	
*/
std::vector<std::vector <float> > sortVertices (std::vector<std::vector<float> > vertexList);


/*! This function converts vertices in the 2D coordinates to their counterparts in the 3D coordinates.
* \param Topverlist vertex coordinates in the top view
* \param Frontverlist vertex coordinates in the front view
* \param Sideverlist vertex coordinates in the side view
* \return Vertices arranged in the ascending order
* \brief This function returns the vertices with all the three coordinates built using the two of the three views.
*/
std::vector<std::vector<float> > vertices2DTo3D (std::vector<std::vector<float> > Topverlist, 
	std::vector<std::vector<float> > frontverlist, std::vector<std::vector<float> > sideverlist);


/*! This function returns the possible edges from the edge list in top, front and side view
* \param view This is one of the three views. Whose edge list would be expanded to cover all the possible edges there could be
*/
std::vector<std::vector<int> > expandEdgeList(View2D view);

/*! This function extracts frm the list of possible edges those which are feasible.
* \param topView top view of the object
* \param frontView front view of the object
* \param sideView side view of the object
* \param view This is one of the three views. Whose edge list would be expanded to cover all the possible edges there could be
*/
std::vector<std::vector<int> > pEdgeList(View2D topView, View2D frontView , View2D sideView);

/*! This function removes the Duplicates from the p_list;
* \param edlist list of edges to be refined
*/
std::vector<std::vector<int> > removeDuplicate (std::vector<std::vector<int> > edlist);

#endif