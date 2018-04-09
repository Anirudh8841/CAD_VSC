#ifndef READ3D_H
#define READ3D_H

#include<iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <sstream>
// #include <algorithm>
#include "Classes/Object3D.h"

using namespace std;

Object3D parseFileAndMakeObject(String filename)   
{
    ifstream inFile(filename);
    std::map <string, int> VertexMap;
    Object3D obj;
    string section, vertexName, initial, final, line;

    char name,name2;
    float x, y, z;
    int mapnumber1,mapnumber2;
    int counter = 0;
    
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    fscanf(inFile, "%[a-zA-z]s", &section)
    
    while(section.compare("Edges") != 0)
    {
      fscanf(inFile, "%[a-zA-z0-9]s = %d, %d, %d", &VertexName, &x, &y, &z);
       std::vector<float> v(3);
       v.pushback(num1);
       v.pushback(num2);
       v.pushback(num3);
       obj.VertexList.pushback(v);
       VertexMap[VertexName] = counter;
       counter++;
       fscanf(inFile, "%[a-zA-z]s", &section);
    }
    
    while(section.compare("Faces") != 0)
    {
      	 //type std::vector<float>(3) vrtx;
        fscanf(inFile, "%[a-zA-z]s, %[a-zA-Z]s", &initial, &final);
        std::vector< std::vector<int> > Edge;
        Edge.pushback(VertexMap[initial]);
        Edge.pushback(VertexMap[final]);
        obj.EdgeList.pushback(Edge);
      	fscanf(inFile, "%[a-zA-Z]s", &section);
    }

    if (section.compare("faces") != 0)
    {
      cout << "Error in file";
      exit(1);
    }
    else
    {
        fscanf(inFile, "%[^\n]s", &line);
        stringstream ss(line);
        ss >> initial;
        initial.pop_back();
        while()
        while ()
    }
    inFile.close();
}
 
#endif