#include "Object3D.h"
#include "Object2D.h"
#include "helper_functions.h"
#include <algorithm>
#include <vector>

#include <iostream>

/**
	This function is written assuming that edges are stored in the the ascending order that is 
*/
// std::vector<int> possibleNbr(Object3D &object, int VertexNum)
// {
// 	int numEdges = object->EdgeList.size();
// 	std::vector<int> neighbours;
// 	for (int i = 0; i < numEdges; i++)
// 	{
// 		if (object->EdgeList[i][0] == VertexNum)
// 		{
// 			neighbours.push_back(EdgeList[i][1]);
// 		}
// 		else if(object->EdgeList[i][1] == VertexNum)
// 		{
// 			neighbours.push_back(EdgeList[i][0]);
// 		}
// 	}
// 	return neighbours;
// }

// std::vector<int> intersectionNbr(std::vector<int> &v1, std::vector<int> &v2)
// {
// 	std::sort(v1->begin(), v1->end());
// 	std::sort(v2->begin(), v2->end());
// 	int numV1 = v1->size();
// 	int numV2 = v2->size();
// 	std::vector<int> returnVect;
// 	for(int i = 0; i < numV1; i++)
// 	{
// 		for (int j = 0; j < numV2; j++)
// 		{
// 			if (v1[i] == v2[j])
// 			{
// 				returnVect.push_back(v1[i]);
// 			}
// 			else if(v2[j] > v1[i])
// 			{
// 				break;
// 			}
// 		}
// 	}
// 	return returnVect;
// }

// std::vector<vector<float> > OrthographicConv(Object2D object)
// {
// 	int numVertex = object.TopView.VertexList.size();
// 	int minAmountTop = 5000;
// 	int maxAmountFront = -5000;
// 	int maxVertexFront;
// 	int minVertexTop;
// 	int 
// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		if (minAmountTop > object.TopView.VertexList[i][1])
// 		{
// 			minAmountTop  = object.TopView.VertexList[i][1];
// 			minVertexTop = i;
// 		}
// 	}

// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		if (maxAmountFront > object.TopView.VertexList[i][1])
// 		{
// 			maxAmountFront = object.TopView.VertexList[i][1];
// 			maxVertexFront = i;
// 		}
// 	}

// 	int gap = minAmountTop - maxAmountFront;

// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		object.TopView.VertexList[i][1] -= gap;
// 	}

// 	std::vector<std::vector<float> > tempVertexList;
// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		if (object.TopView.VertexList[i][1] != object.FrontView.VertexList[i][0])
// 		{
// 			cout << "Last input Object was inconsistent";
// 		}
// 		else
// 		{
// 			std::vector<float> vertex;
// 			vertex.push_back(object.TopView.VertexList[i][0]);
// 			vertex.push_back(object.TopView.VertexList[i][1]);
// 			vertex.push_back(object.FrontView.VertexList[i][1]);
// 			tempVertexList.push_back(vertex);
// 		}
// 	}
// 	return tempVertexList;
// }

Object3D convert2DTo3D (Object2D object)
{
	Object3D x;
	x.VertexList = vertices2DTo3D(object.topView.vertexList, object.frontView.vertexList, object.sideView.vertexList);
	// cout << x.VertexList.size() << "size";
	x.EdgeList = pEdgeList(object.topView, object.frontView, object.sideView);
	x.EdgeList = removeDuplicate(x.EdgeList);
	return x;
}
