



/*! This function generates the orthographic views from the 3D object. It does so by calling three other functions which generate one side each.
\param object 3D object whose orthographic views are required
\return Front, Side and top view
*/
std:tuple<2DObject,2DObject,2DObject> tranform3Dto2D(3Dobject object);


/*! This function gets the Top view of the 3D object
\param object whose top view is required
\return 2DObject which is top view.
*/
2DObject 3DtoTop (3Dobject object);

/*! This function gets the Front view of the 3D object
\param object whose front view is required
\return 2DObject which is front view.
*/
2DObject 3DtoFront (3Dobject object);

/*! This function gets the side view of the 3D object
\param object whose side view is required
\return 2DObject which is side view.
*/
2DObject 3DtoSide (3Dobject object);