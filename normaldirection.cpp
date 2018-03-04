//! \fn normaldirection  
    /*!
      * \param inputplane a 2Dplane argument.
      * \return a tuple consisting of direction cosine values.
      * \detail the function normaldirection returns the normal vector for a given 2D plane.    
      */ 
#include <tuple>
#include "2Dplane"



std::tuple<float,float,float> normaldirection(2Dplane inputplane)
{
    float normalalongx;/*!<normalalaong x is  of float type.  */ 
    float normalalongy;/*!<normalalaong y is  of float type . */ 
    float normalalongz;/*!<normalalaong z is  of float type . */ 




    return std::make_tuple(normalalongx, normalalongy, normalalongz);
}
