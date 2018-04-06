#include <iostream>
#include "parserSaver.h"
#include "Object3D.h"
#include "Object2D.h"
#include "string"
#include <fstream>

using namespace std;
int main()
{
	fstream File("ankush.txt", fstream::out);
	File << "Ankush Shaw";
	string filename("tempObj.obj");
	Object3D object = fileToObject3D(filename);
	for (int i = 0; i < object.VertexList.size(); i++)
	{
		cout << object.VertexList[i][0] << " y " << object.VertexList[i][1] << " z " << object.VertexList[i][2];
		cout << endl;
	}
	object3DToFile(object, "testEval.obj");
	cout << "done";
	File.close();
	return 0;
}
