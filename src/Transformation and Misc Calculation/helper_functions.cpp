#include "helper_functions.h"
	
std::vector<std<::vector <float> > sortVertices (std::vector<std::vector<float> > vertexList)
{	
	sort( vertexList.begin( ), vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
	{
	   return lhs[1] < rhs[1];
	});
	sort( vertexList.begin( ), vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
	{
	   return lhs[2] < rhs[2];
	});

	if (vertexList[1].size() == 4)
	{
		sort( vertexList.begin( ), vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
		{
		   return lhs[3] < rhs[3];
		});
	}
	return vertexList;
}

std::vector<std<::vector<float> > vertices2DTo3D (std::vector<std::vector<float> > Topverlist,
 std::vector<std::vector<float> > Frontverlist, std::vector<std::vector<float> > Sideverlist)
 {
 	std::vector<std::vector<float> > vertexList3D;
 	for(int i = 0; i < Topverlist.size(); i++)
 	{
 		for(int j = 0; j < frontverlist.size(); j++)
 		{
 			if(Topverlist[i][0] == Frontverlist[j][0])
 			{
 				std::vector<float> vertex3D;
 				vertex3D.push_back(Topverlist[i][0]);
 				vertex3D.push_back(Topverlist[i][1]);
 				vertex3D.push_back(Topverlist[i][2]);
 				vertex3D.push_back(Frontverlist[j][2]);
 			}
 		}
 	}
 	return vertexList3D;
 }


std::vector<std::vector<int> > pEdgeList(View2D topView, View2D frontView , View2D sideView)
{
	topViewCompEdge = expandEdgeList(topView);
	frontViewCompEdge = expandEdgeList(frontView);
	sideViewCompEdge = expandEdgeList(sideView);
	std::vector<std::vector<int> > plist;
	bool matchtf, matchts;
	for (int i = 0; i < topViewCompEdge.size(); i++)
	{
		matchtf = false;
		matchts = false;
		for (int j = 0; j < frontViewCompEdge.size(); j++)
		{
			if ((topViewCompEdge[i][0] == frontViewCompEdge[j][0]) && (topViewCompEdge[i][0] == frontViewCompEdge[j][0]))
			{
				matchtf = true;
			}
			if ((topViewCompEdge[i][1] == frontViewCompEdge[j][0]) && (topViewCompEdge[i][0] == frontViewCompEdge[j][1]))
			{
				matchtf = true;
			}
		}
		for (int j = 0; j < sideViewCompEdge.size(); j++)
		{
			if ((topViewCompEdge[i][0] == sideViewCompEdge[j][0]) && (topViewCompEdge[i][0] == sideViewCompEdge[j][0]))
			{
				matchts = true;
			}
			if ((topViewCompEdge[i][1] == sideViewCompEdge[j][0]) && (topViewCompEdge[i][0] == sideViewCompEdge[j][1]))
			{
				matchts = true;
			}	
		}
		if (matchts == true && matchtf == true)
		{
			std::vector<int> pedge;
			pedge.push_back(topViewCompEdge[i][0]);
			pedge.push_back(topViewCompEdge[i][1]);
			plist.push_back(pedge);
		}
	}
	return plist;
}

std::vector<std::vector<int> > expandEdgeList(View2D view)
{
	std::vector<std::vector<int> > edlist;
	
	for(int i = 0; i < view.edgeList.size(); i++)
		edlist.push_back(view.edgeList[i]);

	for(int i = 0; i < view.vertexList.size(); i++)
	{
		for(int j = 0; j < view.vertexList.size(); j++)
		{
			ifView ((view.vertexList[i][2] == view.vertexList[j][2]) && (view.vertexList[i][1] == view.vertexList[j][1]))
			{
				std::vector<int> tempEdge;
				tempEdge.push_back(view.vertexList[i][0]);
				view.edgeList.push_back(view.vertexList[j][0]);
			}
		}
	}
	return edlist;
}

// auto rer(std::vector<std::vector<int> > pList, std::vector<std::vector<float> > vList)
// {
	
// 	bool examined[pList.size()];
// 	for (int i = 0; i < pList.size(); i++)
// 	{
// 		examined[i] = false;
// 	}
// 	for (int i = 0; i < pList.size(); i++)
// 	{
// 		if (examined[i] = false)
// 		{
// 			std::vector<std::vector<int> > overlap;
// 			overlap.push_back(pList[i]);
// 			if (overlap[0])
// 			for (int j = 0; j < pList.size(); j++)
// 			{
// 				if (i == j) continue;
// 				if ()
// 				if (overlap[0][1] - vList[pList[j]]) / (overlap[0][0] - pList[i][0])
// 			}

// 		}
// 	}
// }



