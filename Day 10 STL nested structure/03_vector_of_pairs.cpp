// 03_vector_of_pairs.cpp

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int,int>> vp;

    vp.push_back({1,2});
    vp.push_back({3,4});
    vp.push_back({5,6});

    for(auto p : vp)
        cout << p.first << " " << p.second << endl;

    return 0;
}