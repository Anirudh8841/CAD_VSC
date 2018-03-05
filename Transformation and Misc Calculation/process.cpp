
#include "Object.h"


void process(Object inputObject,int action,int outputFormat)
{
    if (action == 1)
    {
        Orthographic tempObject =  transform3Dto2D(inputObject)
        std::String finename = inputFileNameDialog();
        if (outputFormat == 2) writeToFile2d(tempObject, filename);
        else if (outputFormat == 1) renderOrthographic(tempObject);
    }
    else(action == 2)
    {
        Object tempObject = transform2Dto3D(inputObject)
        std::String finename = inputFileNameDialog();
        if (outputFormat == 2) writeToFile3d(tempObject, filename);
        else if (outputFormat == 1) render3D(tempObject);
    }
    return;
}