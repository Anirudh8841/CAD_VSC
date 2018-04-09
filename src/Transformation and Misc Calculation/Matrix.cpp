include "Matrix.h"

using namespace std;

vector< vector<float> > Matrix::matMul(vector< vector<float> > a, vector< vector<float> > b)
{
	if (a[0].size() != b.size())
	{
		throw invalid_argument("size doesn't tally");
	}
	else
	{
		vector<vector<float> > v (a.size(), vector<float>(b[0].size()));
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b[0].size(); j++)
			{
				v[i][j] = 0;
				for (int k = 0; k < b.size(); k++)
				{
					v[i][j] += a[i][k] * b[k][j];
				}
			}	
		}
	}
	return v;
}

std::vector<float> Matrix::crossProduct(std::vector<float>v1, std::vector<float> v2)
{
	std::vector<float> returnVect;
	returnVect.push_back(v1[1] * v2[2] - v1[2] * v2[1]);
	returnVect.push_back(v1[2] * v2[0] - v1[0] * v2[2]);
	returnVect.push_back(v1[0] * v2[1] - v1[1] * v2[0]);
	return returnVect;
}


