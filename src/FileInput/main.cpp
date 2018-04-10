#include <iostream>
#include "parserSaver.h"
#include "Object3D.h"
#include "Object2D.h"
#include "string"
#include <fstream>

using namespace std;
int main()
{
	Object3D obj = fileToObject3D("test.txt");
	object3DToFile(obj, "answer.txt");
	return 0;
}
