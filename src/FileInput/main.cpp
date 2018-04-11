#include <iostream>
#include "parserSaver.h"
#include "Object3D.h"
#include "Object2D.h"
#include "string"
#include "transform2D.h"
#include "transform3D.h"
#include <fstream>

using namespace std;
int main()
{
	Object3D obj = fileToObject3D("../test/test.txt");
	object3DToFile(obj, "../results/answer.txt");
	Object2D obj2 = convert3DTo2D(obj);
	Object3D obj3 = convert2DTo3D(obj2);
	object2DToFile(obj2, "../results/answer2.txt");
	object3DToFile(obj3, "../results/answer3.txt");
	return 0;
}
