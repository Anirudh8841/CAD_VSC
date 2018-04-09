
#pragma once;
#include <Qt>

/*! It renders the orthographic views of the object on the screen.
\param object Orthographic object containing the coordinates corresponding to top, front and side views
\details Displays the three views adjacent to each other and labelled. 

Front and side views are displayed side by side with top view above the front view.
*/
void renderOrthographic(Orthographic object);



/*! It renders the 3D object on screen by first making a call to the screenProjection function which returns the 2D object which is then rendered on the screen.
* \param object object to be rendered on screen
* \details This function calls render2D with the return of screenProjection.
*/
void render3D(3DObject object);
