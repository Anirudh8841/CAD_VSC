#pragma once;
#include <Qt>

/*! This function checks if close application event has been issued of not.
*    Itakes no parameters.
*/
bool not_Exit();

/*! This function pops up a GUI from where user can navigate and select the ".txt" file containing user's object as input.
* It takes no parameters
* \return string object containing the address of the user's file.
*/
String getFileSource();

/*! This function gets the information on what format does the user wants its output.
* It takes no parameters
* \return int corresponding to the format selected by the user amongst the checklist of options
* \details Options in the checklist would be
*   -Save to a file: In this case user will be asked for the output file name preferred.
*   -Isometric view: Isometric view of the user's object will be rendered on the screen irrespective of whether user has input an object of class 2DObject or 3DObject. 
*   -Orthographic view: Application will draw orthographic view of the user's object in case the input object was of class 3DObject
*/
int getOutputFormat();

