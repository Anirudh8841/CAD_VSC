#include <algorithm>
#include <vector>

using namespace std;

/** axis:
		1 -> x axis,
		2 -> y axis, 
		3 -> z axis
*/
int maxCoordinate(Object3D object, int axis)
{
	int numVertex = object.VertexList.size();
	int max = -5000;
	int maxVertexNum = 0;
	for (int i = 0; i < numVertex; i++)
	{
		if (object.VertexList[i][axis] > max)
		{
			max = object.VertexList[i][axis];
			maxVertexNum = i;
		}
	}
	return i;
}


/**
	View:
		1 -> Top view
		2 -> Front view
		3 -> Side view

	Axis: 
		x -> towards the user
		y -> towards the right of user
		z -> upwards
*/

std::vector< std::vector<float> > View2D (Object3D object, int view)
{

	if(view == 1)
	{
		int[3][3] arratMat = {1, 1, 1, 1, 1, 1, 0, 0, 0,};
		std::vector<std::vector<float> > MattoMul(arratMat, 9);	
	}
	if(view == 2)
	{
		int[3][3] arratMat = {0, 0, 0, 1, 1, 1, 1, 1, 1};
		std::vector<std::vector<float> > MattoMul(arratMat, 9);	
	}
	if(view == 3)
	{
		int[3][3] arratMat = {1, 1, 1, 0, 0, 0, 1, 1, 1};
		std::vector<std::vector<float> > MattoMul(arratMat, 9);
	}
	return MattoMul;
}










