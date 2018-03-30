#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	vector<int> vect(3);
	vect = {1, 2, 3};
	for(int i = 0; i < vect.size(); i++)
	{
		cout << vect[i];
	}

	return 0;
}