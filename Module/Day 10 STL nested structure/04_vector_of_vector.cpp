// 04_vector_of_vector.cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> grid = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for(auto row : grid)
    {
        for(int x : row)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}