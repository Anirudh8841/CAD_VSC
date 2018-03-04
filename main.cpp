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
*       - Oblique 3D to isometric
        - Isometric to orthographic views
* 
* \section Installation
* \subsection Build from source code using cmake and make 
*    -# cmake 
*    -# make install
*/

using namespace std;
/*! Main function loops until the event to close the application is issued.

*   If drawing window is active it watches out for the input through drawing panel.

User can, at any moment change the active window and the state of the drawing will be saved until application is closed.
User can input a file to be read as object by clicking the "Input from file button". Following which brower would pop open.
User can navigate through and select the file.

Functions would be called to parse and make an object out of it.
*/

int main(){
	int action;
	string file; 
	int outputFormat = 0;
	inputObject = new 3DObject();
	while(not_Exit())
	{
		if(inputPanelActive()) 
		{
			inputObject = drawingToInputFormat();
			action = actionToTake();
			outputFormat = getOutputFormat();
			process(inputObject, action, outputFormat);
		}
		if(inputFromFileClicked()) 
		{
			file = getFileSource(); 
			inputObject = parseFileAndMakeObject(file);
			outputFormat = getOutputFormat();
			process(inputObject, action, outputFormat);
		}
	}
}