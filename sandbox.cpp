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

bool doesEdgeExists(std::vector<std::vector<int> > EdgeList, std::vector<int> edge)
{
	for (int i = 0; i < EdgeList.size(); i++)
	{
		if (EdgeList[i][0] == edge[0] && EdgeList[i][1] == edge[1])
		{
			return true;
		}
		if (EdgeList[i][1] == edge[0] && EdgeList[i][0] == edge[1])
		{
			return true;
		}
	}
	return false;
}

Object3D fileToObject3D(string filename)   
{
	cout << "inside function";
    fstream inFile(filename, fstream::in);
    // std::map <string, int> VertexMap;
    Object3D obj;
    string line;
    float x, y, z, num;
   	int initial, final, numVertex, numFaces;
    char lineStart;
    cout << "about to open file";
    if (!inFile.good()) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    cout << "file opened";
    inFile >> numVertex;

    for (int i = 0; i < numVertex; i++)
    {		
    		inFile >> x >> y >> z;
    		std::vector<float> v;
	       	v.push_back(i + 1);
	       	v.push_back(x);
	       	v.push_back(y);
	       	v.push_back(z);
	       	obj.VertexList.push_back(v);
	}

	inFile >> numFaces;

	for (int i = 0; i < numFaces; i++)
    {

    	while (getline(inFile, line))
    	{
			std::vector<int> face;
			istringstream ss(line);
			while(ss >> num)
			{
				face.push_back(num);
			}
			obj.FaceList.push_back(face);
			int j;
			for(j = 0; j < face.size() - 1; j++)
			{
				
				std::vector<int> e;
				e.push_back(face[j]);
				e.push_back(face[j + 1]);
				if (doesEdgeExists(obj.EdgeList, e))
				{
					continue;
				}
				else
				{
					obj.EdgeList.push_back(e);
				}
			}
			std::vector<int> e;
			e.push_back(face[j]);
			e.push_back(face[j + 1]);
			if (doesEdgeExists(obj.EdgeList, e)) 
				obj.EdgeList.push_back(e);
    	}
    }
    inFile.close();
    return obj;
}

void object3DToFile (Object3D object, string filename)
{
	fstream outFile(filename, fstream::out);
	outFile << "#Vertices\n";
	cout << "Written";
	int numVertex = object.VertexList.size();
	for (int i = 0; i < numVertex; i++)
	{
		outFile << object.VertexList[i][0] << object.VertexList[i][1] << object.VertexList[i][2]<< object.VertexList[i][3] << "\n";
	}
	int numFaces = object.FaceList.size();
	for (int i = 0; i < numFaces; i++)
	{
		int numVert = object.FaceList[i].size();
		for (int j = 0; j < numVert; j++)
		{
			outFile << object.FaceList[i][numVert] << " ";
		}
		outFile << "\n";
	}
	cout << "Function end";
	outFile.close();
}

int main() 
{
	cout << "about to call fileToObject3D";
	Object3D object = fileToObject3D("test.txt");
	object3DToFile(object, "asn.txt");
	return 0;
}

