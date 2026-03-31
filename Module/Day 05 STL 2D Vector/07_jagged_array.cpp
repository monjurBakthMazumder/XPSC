// 07_jagged_array.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> jagged;

    jagged.push_back({1,2});
    jagged.push_back({3,4,5});
    jagged.push_back({6});

    for(auto row : jagged){
        for(int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}