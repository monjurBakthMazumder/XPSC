// 09_real_world_patterns.cpp

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5,3,2,5,6,3,7,8};

    multiset<int> ms;

    for(int x : arr)
        ms.insert(x);

    cout << "Sorted with duplicates:\n";

    for(int x : ms)
        cout << x << " ";

    cout << "\n\nCount frequency of 5: ";
    cout << ms.count(5) << endl;

    return 0;
}