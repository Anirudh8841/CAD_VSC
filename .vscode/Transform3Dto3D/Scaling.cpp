/*! \fn Scaling
   * This function Scaling lets user to enlarge or decrease the  viewing object's dimensions
   * \param a 3Dobject  which is to be resized 
   * \param a scale factor to which the object to be resized 
   * \return this function returns a 3dobject after resizing it 
   * \detail The function Scaling Enlarges or reduces selected objects, keeping the proportions of the object the same after scaling. 
   *  the parameter sale factor Multiplies the dimensions of the selected objects by the specified scale.
   *  A scale factor greater than 1 enlarges the objects. A scale factor between 0 and 1 shrinks the objects. 
*/
#include "3Dobject"

3Dobject Scaling(3Dobject object,float scale_fadctor);