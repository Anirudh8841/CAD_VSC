
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

// Object3D fileToObject3D(string filename)   
// {
//     fstream inFile(filename, fstream::in);
//     // std::map <string, int> VertexMap;
//     Object3D obj;
//     string section, VertexName, initial, final, line;
//     float x, y, z;
//     int counter = 0, flag = 0, Tsize = 0, temp = 0;
//     char lineStart;
    
//     if (!inFile) {
//         cout << "Unable to open file";
//         exit(1); // terminate with error
//     }

//     while(inFile >> lineStart)
//     {
//     	cout << lineStart;
//     	if (lineStart == '#' || lineStart == ' ')
//     	{
//     		continue;
//     	}
//     	else if(lineStart == 'v')
//     	{
//     		inFile >> x >> y >> z;
//     		std::vector<float> v(3);
// 	       	v.push_back(x);
// 	       	v.push_back(y);
// 	       	v.push_back(z);
// 	       	obj.VertexList.push_back(v);
// 	       	VertexMap[VertexName] = counter;
// 	       	counter++;
//     	}
//     	else if(lineStart == 'f')
//     	{
//     		inFile >> line;
//     		stringstream ss(line);
//     		std::vector<int> tempVect;
//     		while(ss >> temp)
//     		{
//     			tempVect.push_back(temp);
//     		}
//     		obj.FaceList.push_back(tempVect);
//     		Tsize = tempVect.size();
//     		for (int i = 0; i < Tsize; i++)
//     		{
//     			for (int j = 0; j < obj.EdgeList.size(); j++)
//     			{
//     				if ((tempVect[i] ==  obj.EdgeList[j][0] && tempVect[(i + 1) % Tsize] == obj.EdgeList[j][1]) ||
//     				 (tempVect[i] == obj.EdgeList[j][1] && tempVect[(i + 1) % Tsize] == obj.EdgeList[j][0]))
//     				{
//     					flag = 1;
//     				}	
//     			}
//     			if (flag == 0)
//     			{
//     				std::vector<int> tempV;
//     				tempV.push_back(tempVect[i]);
//     				tempV.push_back(tempVect[(i + 1) % Tsize]);
//     				obj.EdgeList.push_back(tempV);
//     			}
//     			flag = 0;
//     		}
//     	}
    	
//     }
//     inFile.close();
//     return obj;
//     For Edge list 
    
//     if (section.compare("Vertices") != 0)
//     {	
//     	cout << "Error in the file input format";
//     }

//     while(section.compare("Edges") != 0)
//     {
//        inFile >> VertexName >> x >> y >> z;
//        std::vector<float> v(3);
//        v.push_back(x);
//        v.push_back(y);
//        v.push_back(z);
//        obj.VertexList.push_back(v);
//        VertexMap[VertexName] = counter;
//        counter++;
//        inFile >> section;
//     }
    
//     while(section.compare("Faces") != 0)
//     {
//       	 //type std::vector<float>(3) vrtx;
//         inFile >> initial >> final;
//         std::vector<int> Edge;
//         Edge.push_back(VertexMap[initial]);
//         Edge.push_back(VertexMap[final]);
//         obj.EdgeList.push_back(Edge);
//       	inFile >> section;
//     }

//     if(section.compare("faces") != 0)
//     {
//       cout << "Error in file";
//       exit(1);
//     }

//     else
//     {
//         while(inFile >> line)
//         {
// 	        stringstream ss(line);
// 	        std::vector<int> tempFaces;
// 	        while(ss >> initial)
// 	        {
// 	        	initial.pop_back();
// 	        	tempFaces.push_back(VertexMap[initial]);
// 	        }
// 	        obj.FaceList.push_back(tempFaces);
// 	    }
//     }
//     inFile.close();
//     return obj;
// }
 

// void object3DToFile (Object3D object, string filename)
// {
// 	fstream outFile(filename, fstream::out);
// 	outFile << "#Vertices\n";
// 	cout << "Written";
// 	int numVertex = object.VertexList.size();
// 	for (int i = 0; i < numVertex; i++)
// 	{
// 		outFile << "v " << object.VertexList[i][0] << " " << object.VertexList[i][1] << " " << object.VertexList[i][2] << "\n";
// 	}
// 	outFile << "#Faces \n usemtl Default \n";
// 	int numFaces = object.FaceList.size();
// 	for (int i = 0; i < numFaces; i++)
// 	{
// 		int numVert = object.FaceList[i].size();
// 		outFile << "f ";
// 		for (int j = 0; j < numVert; j++)
// 		{
// 			outFile << object.FaceList[i][numVert] << " ";
// 		}
// 		outFile << "\n";
// 	}
// 	cout << "Function end";
// 	outFile.close();
// }

// Object2D fileToObject2D(string filename)

// {
// 	ifstream inFile(filename);
// 	std::map<string, int> VertexMap;
// 	string header;
// 	Object2D object;
// 	float x, y, z;
// 	string VertexName, sandVertex;
// 	int numVertex;
// 	cin >> sandVertex >> numVertex;
// 	while (cin >> header)
// 	{
// 		if (header.compare("Top View") == 0)
// 		{
// 			for (int i = 0; i < numVertex; i++)
// 			{
// 				cin >> VertexName >> x >> y;
// 				VertexName.pop_back();
// 				VertexMap[VertexName] = i;
// 				std::vector<float> tempVect(numVertex);
// 				tempVect.push_back(x);
// 				tempVect.push_back(y);
// 				object.TopView.VertexList.push_back(tempVect);
// 			}		
// 		}

// 		if (header.compare("Front View") == 0)
// 		{
// 			for (int i = 0; i < numVertex; i++)
// 			{
// 				cin >> VertexName >> y >> z;
// 				std::vector<float> tempVect(numVertex);
// 				VertexName.pop_back();
// 				tempVect.push_back(y);
// 				tempVect.push_back(z);
// 				object.FrontView.VertexList[VertexMap[VertexName]] = tempVect;
// 			}		
// 		}

// 		if (header.compare("Front View") == 0)
// 		{
// 			for (int i = 0; i < numVertex; i++)
// 			{
// 				cin >> VertexName >> x >> z;
// 				std::vector<float> tempVect(numVertex);
// 				VertexName.pop_back();
// 				tempVect.push_back(x);
// 				tempVect.push_back(z);
// 				object.SideView.VertexList[VertexMap[VertexName]] = tempVect;
// 			}		
// 		}
// 	}
// 	return object;
// }

Object2D fileToObject2D(string filename)

{
	ifstream inFile(filename);
	Object2D object;
	float x, y, z;
	int numVertex;
	int numEdges;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < numVertex; j++)
		{
			inFile >> x >> y;
			std::vector<float> tempVect;
			tempVect.push_back(j + 1);
			tempVect.push_back(x);
			tempVect.push_back(y);
			if (i == 0)
				object.topView.vertexList.push_back(tempVect);
			else if (i == 1)
				object.frontView.vertexList.push_back(tempVect);
			else 
				object.sideView.vertexList.push_back(tempVect);
		}		
		inFile >> numEdges;
		cout << numEdges << "out of vertexlist";
		for (int j = 0; j < numEdges; j++)
		{
			cin >> y >> z;
			cout << y << z;
			std::vector<int> tempVect;
			// tempVect.push_back(j + 1);
			tempVect.push_back(y);
			tempVect.push_back(z);
			if (i == 0)
				object.topView.edgeList.push_back(tempVect);
			else if ( i == 1)
				object.frontView.edgeList.push_back(tempVect);
			else 
				object.sideView.edgeList.push_back(tempVect);
		}		
	}
	cout << "out of file";
	inFile.close();
	return object;
}


void object2DToFile (Object2D object, string filename)
{
	fstream outFile(filename, fstream::out);
	outFile << "\n#Top View\nVertex\n";
	outFile << object.topView.vertexList.size();
	outFile << '\n';
	sort( object.topView.vertexList.begin( ), object.topView.vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
	{
	   return lhs[0] < rhs[0];
	});
	for (int i = 0; i < object.topView.vertexList.size(); i++)
	{
		outFile << object.topView.vertexList[i][0] << " " << object.topView.vertexList[i][1] << " " << object.topView.vertexList[i][2] << "\n";
	}
	outFile << "\nEdges\n";
	outFile << object.topView.edgeList.size();
	outFile << "\n";
	for (int i = 0; i < object.topView.edgeList.size(); i++)
	{
		outFile << object.topView.edgeList[i][0] << " " << object.topView.edgeList[i][1] << '\n';
	}

	outFile <<"\n#Front View\nVertices\n";
	outFile << object.frontView.vertexList.size();
	outFile << '\n';
	sort( object.frontView.vertexList.begin( ), object.frontView.vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
	{
	   return lhs[0] < rhs[0];
	});
	for (int i = 0; i < object.frontView.vertexList.size(); i++)
	{
		outFile << object.frontView.vertexList[i][0] << " " << object.frontView.vertexList[i][1] << " " << object.frontView.vertexList[i][2] << "\n";
	}
	outFile << "\nEdges\n";
	outFile << object.frontView.edgeList.size();
	outFile << "\n";
	for (int i = 0; i < object.frontView.edgeList.size(); i++)
	{
		outFile << object.frontView.edgeList[i][0] << " " << object.frontView.edgeList[i][1] << '\n';
	}

	
	outFile <<"\n#Side View\nVertices\n";
	outFile << object.sideView.vertexList.size();
	outFile << '\n';
	sort( object.sideView.vertexList.begin( ), object.sideView.vertexList.end( ), [ ](const auto& lhs, const auto& rhs)
	{
	   return lhs[0] < rhs[0];
	});
	for (int i = 0; i < object.sideView.vertexList.size(); i++)
	{
		outFile << object.sideView.vertexList[i][0] << " " << object.sideView.vertexList[i][1] << " " << object.sideView.vertexList[i][2] << "\n";
	}
	outFile << "\nEdges\n";
	outFile << object.sideView.edgeList.size();
	outFile << "\n";
	for (int i = 0; i < object.sideView.edgeList.size(); i++)
	{
		outFile << object.sideView.edgeList[i][0] << " " << object.sideView.edgeList[i][1] << '\n';
	}
	outFile.close();
}

void object3DToFile (Object3D object, string filename)
{
	fstream outFile(filename, fstream::out);
	outFile << "#Vertices\n";
	// cout << "Written";
	// cout << object.VertexList.size() << "\n";
	int numVertex = object.VertexList.size();
	for (int i = 0; i < numVertex; i++)
	{
		outFile << object.VertexList[i][0] << " " << object.VertexList[i][1] << " " << object.VertexList[i][2]<< " " << object.VertexList[i][3] << "\n";
	}

	// outFile << "\n#faces\n";
	// int numFaces = object.FaceList.size();
	// for (int i = 0; i < numFaces; i++)
	// {
	// 	int numVert = object.FaceList[i].size();
	// 	for (int j = 0; j < numVert; j++)
	// 	{
	// 		outFile << object.FaceList[i][j] << " ";
	// 	}
	// 	outFile << "\n";
	// }
	outFile << "\n edges \n";
	int numEdges = object.EdgeList.size();
	for (int i = 0; i < numEdges; i++)
	{
		outFile << object.EdgeList[i][0] << " " << object.EdgeList[i][1] << "\n";
	}
	// cout << "Function end";

	outFile.close();
}



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
	// cout << "inside function";
    fstream inFile(filename, fstream::in);
    // std::map <string, int> VertexMap;
    Object3D obj;
    string line;
    float x, y, z;
    int num;
   	int initial, final, numVertex, numFaces;
    char lineStart;
    // cout << "about to open file\n";
    if (!inFile.good()) {
        // cout << "Unable to open file";
        exit(1); // terminate with error
    }
    // cout << "file opened";
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
				// cout << num << '\n';
			}
			if (face.size() < 3)
				continue;
			obj.FaceList.push_back(face);
			int j;
			// cout << face.size();
			for(j = 0; j < face.size() - 1; j++)
			{	
				std::vector<int> e;
				// e.push_back(j);
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
			e.push_back(face[0]);
			if (!doesEdgeExists(obj.EdgeList, e)) 
				obj.EdgeList.push_back(e);
    	}
    }
    inFile.close();
    return obj;
}
