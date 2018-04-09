#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

void getElement(std::vector<int> v, int i)
{
	v[i] = 10;
	return;
}

int main (){
	int i; 
	int j;
	scanf("%d", &i);
	cin >> j;
	cout << i << endl<< j;
	return 0;
}