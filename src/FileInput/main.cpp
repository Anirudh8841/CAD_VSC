#include <iostream>
#include "parserSaver.h"
#include "Object3D.h"
#include "Object2D.h"
#include "string"
#include "transform2D.h"
#include <fstream>

using namespace std;
int main()
{
	Object3D obj = fileToObject3D("test.txt");
	object3DToFile(obj, "answer.txt");
	// Object2D obj2 = convert3DTo2D(obj);
	// object2DToFile(obj2, "answer2.txt");
	return 0;
}
