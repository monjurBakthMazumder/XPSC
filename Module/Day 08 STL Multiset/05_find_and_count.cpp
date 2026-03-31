// 05_find_and_count.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {10,20,10,30,10};

    // find
    auto it = ms.find(10);

    if(it != ms.end())
        cout << "Found 10\n";

    // count duplicates
    cout << "Count of 10: " << ms.count(10) << endl;

    return 0;
}