/*!
* \author Ankush shaw 
* \author Anirudh Kammampathy
* \version 1.0
* \date 26-02-2018 
* \warning Implementation is yet to be taken up. Code structure might change here and there at completion. This is the proposed structure.
* \mainpage Computer Aided Design: Draw and Visualize
* \section Overview
fslfjsdlfjl
* \section Installation
* \subsection From source code using 
*/

#include

using namespace std;

int main(){
	/*! This contains the integer equivalent of the action to be performed. 
	| Value | Action |
	| :----:|:------:|
	| 1		| 3D - 2D|
	| 2		| 2D - 3D|
	*/
	int action = 0;  
	string file; 
	int outputFormat = 0; ///< stores the output format requested by the user
	inputObject = new 3DObject(); /**< Temporary object storage unit. User's drawing or object from the input file is stored in this memory.
										This is passed across the functions for method. */
	while(not_Exit())///<This function checks whether user has issued "close the application" event
	{
		if(inputPanelActive()) ///< This function checks if the current active window is the drawing interface or not.
		{
			inputObject = drawingToInputFormat();
			action = actionToTake();
			outputFormat = getOutputFormat();
			process(inputObject, action, outputFormat);
		}
		if(inputFromFileClicked()) ///< This function checks if the user has clicked the button for input through file
		{
			file = getFileSource(); ///< 
			inputObject = parseFileAndMakeObject(file);
			outputFormat = getOutputFormat();
			process(inputObject, action, outputFormat);
		}

	}
    
}