#include <ofstream>
#include "../Classes/Object3D.h"
#inlcude 

using namespace std;




void Object3DtoFile (Object3D object, string filename)
{
	ofstream outFile(filename);
	filename << "#Vertices\n";
	int numVertex = object.VertexList.size();
	for (int i = 0; i < numVertex; i++)
	{
		cout << "v " << object.VertexList[i][0] << " " << object.VertexList[i][1] << " " << object.VertexList[i][2] << "\n";
	}
	cout << "#Faces \n usemtl Default \n"
	int numFaces = object.Faces.size();
	for (int i = 0; i < numFaces; i++)
	{
		int numVert = object.Faces[i].size();
		cout << "f ";
		for (int j = 0; j < numVert; j++)
		{
			cout << object.Faces[i][numVert] << " ";
		}
		cout << "\n";
	}
	outFile.close();

}