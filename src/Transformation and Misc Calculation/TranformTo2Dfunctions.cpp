#include <algorithm>
#include <vector>

using namespace std;

/** axis:
		1 -> x axis,
		2 -> y axis, 
		3 -> z axis
*/
// int maxCoordinate(Object3D object, int axis)
// {
// 	int numVertex = object.VertexList.size();
// 	int max = -5000;
// 	int maxVertexNum = 0;
// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		if (object.VertexList[i][axis] > max)
// 		{
// 			max = object.VertexList[i][axis];
// 			maxVertexNum = i;
// 		}
// 	}
// 	return i;
// }


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

// std::vector< std::vector<float> > View2D (Object3D object, int view)
// {

// 	if(view == 1)
// 	{
// 		int[3][3] arratMat = {1, 1, 1, 1, 1, 1, 0, 0, 0,};
// 		std::vector<std::vector<float> > MattoMul(arratMat, 9);	
// 	}
// 	if(view == 2)
// 	{
// 		int[3][3] arratMat = {0, 0, 0, 1, 1, 1, 1, 1, 1};
// 		std::vector<std::vector<float> > MattoMul(arratMat, 9);	
// 	}
// 	if(view == 3)
// 	{
// 		int[3][3] arratMat = {1, 1, 1, 0, 0, 0, 1, 1, 1};
// 		std::vector<std::vector<float> > MattoMul(arratMat, 9);
// 	}
// 	return MattoMul;
// }



Object2D convert3DTo2D (Object3D object)
{
	Object2D tempObj;
	//Making vertices in 2D
	for (int i = 0; i < object.VertexList.size(); i++)
	{
		std::vector<int> v;
		v.push_back(object.VertexList[i][0]);
		v.push_back(object.VertexList[i][1]);
		v.push_back(object.VertexList[i][2]);
		tempObj.topView.vertexList.push_back(v);

		v[1] = object.VertexList[i][2];
		v[2] = object.VertexList[i][3];
		tempObj.frontView.vertexList.push_back(v);

		v[1] = object.VertexList[i][3];
		v[2] = object.VertexList[i][1];
		tempObj.sideView.vertexList.push_back(v);
	}

	for (int i = 0; i < object.EdgeList.size(); i++)
	{
		tempObj.topView.edgeList.pushback(object.EdgeList[i][0]);
		tempObj.topView.edgeList.pushback(object.EdgeList[i][1]);
		tempObj.frontView.edgeList.pushback(object.EdgeList[i][0]);
		tempObj.frontView.edgeList.pushback(object.EdgeList[i][1]);
		tempObj.sideView.edgeList.pushback(object.EdgeList[i][0]);
		tempObj.sideView.edgeList.pushback(object.EdgeList[i][1]);

	}
	return tempObj;
}









