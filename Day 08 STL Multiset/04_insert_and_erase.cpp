// 04_insert_and_erase.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);

    cout << "Before erase:\n";

    for(int x : ms)
        cout << x << " ";

    // erase ALL occurrences
    ms.erase(10);

    cout << "\nAfter erase all 10:\n";

    for(int x : ms)
        cout << x << " ";

    return 0;
}