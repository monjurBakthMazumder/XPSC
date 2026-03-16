// 06_set_of_pairs.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<pair<int,int>> s;

    s.insert({2,3});
    s.insert({1,5});
    s.insert({2,3});

    for(auto p : s)
        cout << p.first << " " << p.second << endl;

    return 0;
}