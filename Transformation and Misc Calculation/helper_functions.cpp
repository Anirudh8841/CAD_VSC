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

}