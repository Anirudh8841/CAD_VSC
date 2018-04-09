// includes

3Dobject rotate(3Dobject inputObject, int action){

	/*! 
	* this function returns the direction in which the mouse has been dragged.
	* implemented as follows: drag amount along the x and y axis is measured and the 
	* coordinates with greater amount is returned
	*/
	int dragAmountX = mouseDragAmount(0); 
	int dragAmountY = mouseDragAmount(1); 
	int dragAmountXNormalise = normalise(dragAmountX);
	int dragAmountYNormalise = normalise(dragAmountY);
	return (matrixTransform(inputObject, dragAmountXNormalised, dragAmountYNormalised))


}