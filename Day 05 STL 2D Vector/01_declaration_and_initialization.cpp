// 01_declaration_and_initialization.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Empty 2D vector
    vector<vector<int>> v;

    // Fixed size (3x4)
    vector<vector<int>> grid(3, vector<int>(4));

    // Initialize with value
    vector<vector<int>> matrix(3, vector<int>(4, 5));

    // Direct initialization
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << arr[1][2] << endl;

    return 0;
}