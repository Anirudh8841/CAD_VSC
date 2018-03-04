
#include "Object.h"


void process(Object inputObject,int action,int outputFormat)
{
    if (action == 1)
    {
        Object tempObject =  transform3Dto2D(inputObject)
        std::String finename = inputFileNameDialog();
        if (outputFormat == 2) writeToFile2d(tempObject, filename);
    }
    else(action == 2)
    {
        Object tempObject = transform2Dto3D(inputObject)
        std::String finename = inputFileNameDialog();
        if (outputFormat == 2) writeToFile3d(tempObject, filename);
    }
    if (outputFormat == 1)
    {
        renderOnScrenn(tempObject);
    }
    return;
}