// 04_dynamic_resize_and_management.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> v;

    int rows = 3, cols = 4;

    // Dynamic row creation
    v.resize(rows);

    // Dynamic column creation
    for(int i=0;i<rows;i++)
        v[i].resize(cols);

    v[1][2] = 100;

    // Add new row dynamically
    v.push_back({10,20,30});

    return 0;
}