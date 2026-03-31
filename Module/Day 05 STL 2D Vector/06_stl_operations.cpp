// 06_stl_operations.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<vector<int>> v = {
        {3,1,2},
        {6,4,5}
    };

    // Sort each row
    for(auto &row : v)
        sort(row.begin(), row.end());

    // Reverse rows
    reverse(v.begin(), v.end());

    return 0;
}