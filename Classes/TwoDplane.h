
#ifndef TWODPLANE_H
#define TWODPLANE_H


type std::vector<float>(3) Vertex;

class TwoDplane{
	
    public: 
        std::vector<Vertex> VertexList;

        std::tuple<int, int> EdgeList;

};

#endif


