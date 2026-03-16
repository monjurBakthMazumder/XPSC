// 03_traversal_methods.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40};

    cout << "Range based loop:\n";

    for(int x : s)
        cout << x << " ";

    cout << "\nIterator traversal:\n";

    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}