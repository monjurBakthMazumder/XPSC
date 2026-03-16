// 07_multiset_of_pairs.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<pair<int,int>> ms;

    ms.insert({1,2});
    ms.insert({1,2});
    ms.insert({3,4});

    for(auto p : ms)
        cout << p.first << " " << p.second << endl;

    return 0;
}