#include "normaldirection.h"
#include<cmath>

std::tuple<float,float,float> normaldirection(TwoDobject inputplane){

	
	std::list<Vertex> dup_Vertexlist;
    dup_Vertexlist = inputplane.VertexList;
	Vertex v1,v2,v3;
	std::tuple<float,float,float> a,b,c;
	int magnitude,sumsquares;


	std::list<Vertex>::iterator it=dup_Vertexlist.begin();
	v1=*it;
	it=++it;
	v2=*it;
	it=++it;
	v3=*it;
  
  

	std::get<0>(a) =  std::get<0>(v1) - std::get<0>(v2);
	std::get<0>(b) =  std::get<0>(v3) - std::get<0>(v2);

	std::get<1>(a) =  std::get<1>(v1) - std::get<1>(v2);
	std::get<1>(b) =  std::get<1>(v3) - std::get<1>(v2);


	std::get<2>(a) =  std::get<2>(v1) - std::get<2>(v2);
	std::get<2>(b) =  std::get<2>(v3) - std::get<2>(v2);

   std::get<0>(c) = (std::get<1>(a))*(std::get<2>(b)) -(std::get<2>(a))*(std::get<1>(b));
   std::get<1>(c) = (std::get<0>(a))*(std::get<2>(b)) -(std::get<2>(a))*(std::get<0>(b));
   std::get<2>(c) = (std::get<0>(a))*(std::get<1>(b)) -(std::get<1>(a))*(std::get<0>(b));
   sumsquares=pow(std::get<0>(c),2)+pow(std::get<1>(c),2)+pow(std::get<2>(c),2);
   magnitude=sqrt(sumsquares);
   std::get<0>(c)=(std::get<0>(c))/magnitude;
   std::get<1>(c)=(std::get<1>(c))/magnitude;
   std::get<0>(c)=(std::get<0>(c))/magnitude;

   return c;




}

