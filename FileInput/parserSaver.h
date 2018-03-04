#pragma once;
#include "3DObject"

/// Parse file and make object of 3DObject class
/*! This function reads a file and contructs a 3D object from it.
Refer mathematical analysis doc files for the parsing convention used.

\param filename single argument which is the filename containing the object 
\exception fileNotFound in case no such file exists by the name user has defined
\return an object of 3DObject class 
> Note that filename should have ".txt" extension and formatted as per norms described in mathematical analysis docfiles.
*/
3DObject parseFileAndMakeObject(std::String filename);


/*! Makes a file of ".txt" format using the norms defined in the  mathematical analysis docfile for 3D object.
\param object 3D object to be saved.
\param filename preferred name of the output file.
\return void type. A file would be made with the name as defined by the filename parameter.
*/
void writeToFile3d(3DObject object, std::String filename );

/*! Makes a file of ".txt" format using the norms defined in the  mathematical analysis docfile for 3D object.
\param object 3D object to be saved.
\param filename preferred name of the output file.
\return void type. A file would be made with the name as defined by the filename parameter.
*/
void writeToFile2D(2Dobject object, std::String filename);



