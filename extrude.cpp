//! \fn Extrude
/*!
 * Plane extrude takes input of a 2d plane and an int value the amount upto which plane has to be extruded    
 * @param amount an integer argument.
 * @param inputplane a 2Dplane.
 * @return Returns the generated 3d object
*/
#include<iostream>
#include<tuple> 
#include "2Dplane"
#include "3Dobject"

<<<<<<< HEAD
using namespace std;

3Dobject Extrude(int amount,2Dplane inputplane){
=======


Plane Extrude(int amount,2Dplane inputplane){
>>>>>>> 71b855b60bf54414d241586496859151a4434b95
    
    tuple <int, int, int> Normal;/*!<Normal vector representing in the form of tuple of x,y,z direction cosines. */ 
    
    //! A fuunction normaldirection taking 2Dplane as argument 
    /*!
      * @param inputplane a 2Dplane argument.
      * @return a tuple consistinfg of direction cosine values
      */ 
    Normal= normaldirection(inputplane);

    //! A fuunction makingUnion taking Vertex v ,amount and direction as arguments 
    /*!
      * @param v a Vertex argument.
      * @param amount an integer argument.
      * @param direction a tuple having Normal directions .
    */
    void makingUnion(v,amount,direction);

 //! A fuunction genrate_3d_object 
    /*!
    * @param vertex_list a Vertex list arguement.
    *  @return Returns a  3D object
    */
	return generate_3D_object(vertex_list);
}