// 09_real_world_patterns.cpp

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5,3,2,5,6,3,7,8};

    set<int> uniqueNumbers;

    // Remove duplicates
    for(int x : arr)
        uniqueNumbers.insert(x);

    cout << "Unique sorted numbers:\n";

    for(int x : uniqueNumbers)
        cout << x << " ";

    cout << "\n\nCheck existence:\n";

    if(uniqueNumbers.count(6))
        cout << "6 exists\n";
    else
        cout << "6 not found\n";

    return 0;
}