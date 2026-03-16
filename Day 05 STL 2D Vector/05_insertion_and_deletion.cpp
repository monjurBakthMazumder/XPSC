// 05_insertion_and_deletion.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> v = {
        {1,2},
        {3,4}
    };

    // Add row
    v.push_back({5,6});

    // Remove last row
    v.pop_back();

    // Insert row
    v.insert(v.begin()+1, {9,9});

    // Delete row
    v.erase(v.begin());

    return 0;
}