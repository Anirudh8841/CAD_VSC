#include <iostream>
#include <vector>
using namespace std;

void getElement(std::vector<int> v, int i)
{
	v[i] = 10;
	return;
}

int main (){
	string  x = "a, b, d, c, wer\n"

	std::vector<int> gv(a, a + sizeof(a)/sizeof(*a));
	cout << sizeof(a) << sizeof(*a);
	for (int i = 0; i < gv.size(); i++) 
	{
		getElement(gv, i);
		cout<< gv[i];
	}

	return 0;
}