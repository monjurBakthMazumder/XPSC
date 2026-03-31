// 08_reverse_traversal.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {10,20,10,30};

    cout << "Reverse traversal:\n";

    for(auto it = ms.rbegin(); it != ms.rend(); it++)
        cout << *it << " ";

    return 0;
}