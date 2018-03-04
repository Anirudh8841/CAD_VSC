



class Orthographic{
public: 
    2DObject top_view;  ///< Contains 
    2DObject front_view;
    2DObject side_view;

    /*! This contructor takes an 3D object and generates front, top and side orthographic views. 
    *   \param tempObject Object whos orthographic views are required
    *   \return Orthographic object with top, front and side views
    *   \details This function calls transform3Dto2D which further calls 3DtoFront, 3DtoTop and 3DtoSide functions to achieve the said task.
    */
    Orthographic(3Dobject tempObject);
}