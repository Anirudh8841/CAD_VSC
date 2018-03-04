#pragma once;
#include "3DObject"

/// Parse file and make object of 3DObject class
/*! This function reads a file and contructs a 3D object from it.
Refer mathematical analysis doc files for the parsing convention used.

\param filename single argument which is the filename containing the object 
> Note that filename should have ".txt" extension and formatted as per norms described in mathematical analysis docfiles.
*/
parseFileAndMakeObject(std::String filename);
