// 08_reverse_traversal.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40};

    cout << "Reverse Traversal:\n";

    for(auto it = s.rbegin(); it != s.rend(); it++)
        cout << *it << " ";

    return 0;
}