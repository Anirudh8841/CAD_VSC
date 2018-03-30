include "Matrix.h"

using namespace std;

vector< vector<int> > matrix::matMul(vector< vector<int> > a, vector< vector<int> > b)
{
	if (a[0].size() != b.size())
	{
		throw invalid_argument("size doesn't tally");
	}
	else
	{
		vector<vector<int> > v (a.size(), vector<int>(b[0].size()));
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


vector< vector<int> >