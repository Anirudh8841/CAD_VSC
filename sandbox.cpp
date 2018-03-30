// C++ code to demonstrate 2D vector
#include <iostream>
#include <vector> // for 2D vector
using namespace std;
 
int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> > vect(10, vector<int>(10, 1));
    cout<<"inside the loop";
    // Displaying the 2D vector
    for (int i = 0; i < vect.size(); i++) 
    {    
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    std::cout << "done";
    return 0;
}