#ifndef ORTHOGRAPHICVIEW_H
#define ORTHOGRAPHICVIEW_H

#include <vector>
class OrthographicView
{
public: 
	std::vector<std::vector<float> > VertexList;
	std::vector<std::vector<int> > EdgeList;
};

#endif