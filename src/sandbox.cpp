#include <iostream>
#include <vector>
#include "Object3D.h"
using namespace std;

typedef vector< vector<float> > vector2D;

void printing(vector2D vect)
{
	cout << vect.size();
	cout << vect[0].size();

	int size = vect.size();
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << vect[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	// Object3D tempObj;
	// tempObj.VertexList[0][0] = 2;
	// cout << "above";
	// cout << tempObj.VertexList[0][0];
	// // printing(tempObj.VertexList);
	// return 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << a << b << c << d;;
	return 0;
}