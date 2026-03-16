// 03_access_and_iteration.cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> v = {
        {1,2,3},
        {4,5,6}
    };

    // Index access
    cout << v[0][1] << endl;

    // Range loop
    for(auto row : v){
        for(auto val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}