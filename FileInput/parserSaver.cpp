
#include<iostream>
#include <fstream>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <sstream>
// #include <algorithm>
#include "Object3D.h"
#include "Object2D.h"

using namespace std;

Object3D fileToObject3D(string filename)   
{
    fstream inFile(filename, fstream::in);
    // std::map <string, int> VertexMap;
    Object3D obj;
    string section, VertexName, initial, final, line;
    float x, y, z;
    int counter = 0, flag = 0, Tsize = 0, temp = 0;
    char lineStart;
    
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    while(inFile >> lineStart)
    {
    	cout << lineStart;
    	if (lineStart == '#' || lineStart == ' ')
    	{
    		continue;
    	}
    	else if(lineStart == 'v')
    	{
    		inFile >> x >> y >> z;
    		std::vector<float> v(3);
	       	v.push_back(x);
	       	v.push_back(y);
	       	v.push_back(z);
	       	obj.VertexList.push_back(v);
	       	VertexMap[VertexName] = counter;
	       	counter++;
    	}
    	else if(lineStart == 'f')
    	{
    		inFile >> line;
    		stringstream ss(line);
    		std::vector<int> tempVect;
    		while(ss >> temp)
    		{
    			tempVect.push_back(temp);
    		}
    		obj.FaceList.push_back(tempVect);
    		Tsize = tempVect.size();
    		for (int i = 0; i < Tsize; i++)
    		{
    			for (int j = 0; j < obj.EdgeList.size(); j++)
    			{
    				if ((tempVect[i] ==  obj.EdgeList[j][0] && tempVect[(i + 1) % Tsize] == obj.EdgeList[j][1]) ||
    				 (tempVect[i] == obj.EdgeList[j][1] && tempVect[(i + 1) % Tsize] == obj.EdgeList[j][0]))
    				{
    					flag = 1;
    				}	
    			}
    			if (flag == 0)
    			{
    				std::vector<int> tempV;
    				tempV.push_back(tempVect[i]);
    				tempV.push_back(tempVect[(i + 1) % Tsize]);
    				obj.EdgeList.push_back(tempV);
    			}
    			flag = 0;
    		}
    	}
    	
    }
    inFile.close();
    return obj;
    //For Edge list 
    
    // if (section.compare("Vertices") != 0)
    // {	
    // 	cout << "Error in the file input format";
    // }

    // while(section.compare("Edges") != 0)
    // {
    //    inFile >> VertexName >> x >> y >> z;
       // std::vector<float> v(3);
       // v.push_back(x);
       // v.push_back(y);
       // v.push_back(z);
       // obj.VertexList.push_back(v);
       // VertexMap[VertexName] = counter;
       // counter++;
    //    inFile >> section;
    // }
    
    // while(section.compare("Faces") != 0)
    // {
    //   	 //type std::vector<float>(3) vrtx;
    //     inFile >> initial >> final;
    //     std::vector<int> Edge;
    //     Edge.push_back(VertexMap[initial]);
    //     Edge.push_back(VertexMap[final]);
    //     obj.EdgeList.push_back(Edge);
    //   	inFile >> section;
    // }

    // if(section.compare("faces") != 0)
    // {
    //   cout << "Error in file";
    //   exit(1);
    // }

    // else
    // {
    //     while(inFile >> line)
    //     {
	   //      stringstream ss(line);
	   //      std::vector<int> tempFaces;
	   //      while(ss >> initial)
	   //      {
	   //      	initial.pop_back();
	   //      	tempFaces.push_back(VertexMap[initial]);
	   //      }
	   //      obj.FaceList.push_back(tempFaces);
	   //  }
    // }
    // inFile.close();
    // return obj;
}
 

void object3DToFile (Object3D object, string filename)
{
	fstream outFile(filename, fstream::out);
	outFile << "#Vertices\n";
	cout << "Written";
	int numVertex = object.VertexList.size();
	for (int i = 0; i < numVertex; i++)
	{
		outFile << "v " << object.VertexList[i][0] << " " << object.VertexList[i][1] << " " << object.VertexList[i][2] << "\n";
	}
	outFile << "#Faces \n usemtl Default \n";
	int numFaces = object.FaceList.size();
	for (int i = 0; i < numFaces; i++)
	{
		int numVert = object.FaceList[i].size();
		outFile << "f ";
		for (int j = 0; j < numVert; j++)
		{
			outFile << object.FaceList[i][numVert] << " ";
		}
		outFile << "\n";
	}
	cout << "Function end";
	outFile.close();
}

Object2D fileToObject2D(string filename)

{
	ifstream inFile(filename);
	std::map<string, int> VertexMap;
	string header;
	Object2D object;
	float x, y, z;
	string VertexName, sandVertex;
	int numVertex;
	cin >> sandVertex >> numVertex;
	while (cin >> header)
	{
		if (header.compare("Top View") == 0)
		{
			for (int i = 0; i < numVertex; i++)
			{
				cin >> VertexName >> x >> y;
				VertexName.pop_back();
				VertexMap[VertexName] = i;
				std::vector<float> tempVect(numVertex);
				tempVect.push_back(x);
				tempVect.push_back(y);
				object.TopView.VertexList.push_back(tempVect);
			}		
		}

		if (header.compare("Front View") == 0)
		{
			for (int i = 0; i < numVertex; i++)
			{
				cin >> VertexName >> y >> z;
				std::vector<float> tempVect(numVertex);
				VertexName.pop_back();
				tempVect.push_back(y);
				tempVect.push_back(z);
				object.FrontView.VertexList[VertexMap[VertexName]] = tempVect;
			}		
		}

		if (header.compare("Front View") == 0)
		{
			for (int i = 0; i < numVertex; i++)
			{
				cin >> VertexName >> x >> z;
				std::vector<float> tempVect(numVertex);
				VertexName.pop_back();
				tempVect.push_back(x);
				tempVect.push_back(z);
				object.SideView.VertexList[VertexMap[VertexName]] = tempVect;
			}		
		}
	}
	return object;
}


