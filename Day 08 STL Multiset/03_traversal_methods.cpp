// 03_traversal_methods.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {10,20,10,30,20};

    cout << "Range-based traversal:\n";

    for(int x : ms)
        cout << x << " ";

    cout << "\nIterator traversal:\n";

    for(auto it = ms.begin(); it != ms.end(); it++)
        cout << *it << " ";

    return 0;
}