//! \fn Extrude
/*!
 * Plane extrude takes input of a 2d plane and an float value the amount upto which plane has to be extruded    
 * \param amount an flaot argument.
 * \param inputplane a 2Dplane.
 * \return Returns the generated 3d object
 * \detail Creates a 3D solid from an object that encloses an area 
*/
#include<iostream>
#include "generate_3D_object"
#include "normaldirection"

using namespace std;

3Dobject Extrude(float amount,2Dplane inputplane){
    
    tuple <float, float, float> Normal;/*!<Normal vector representing in the form of tuple of x,y,z direction cosines. */ 
    
    
    Normal= normaldirection(inputplane);

    
    makingUnion(v,amount,Normal);

 
	return generate_3D_object(vertex_list);
}