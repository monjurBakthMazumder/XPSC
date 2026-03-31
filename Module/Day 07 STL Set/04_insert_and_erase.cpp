// 04_insert_and_erase.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout << "Before erase:\n";

    for(int x : s)
        cout << x << " ";

    // erase by value
    s.erase(20);

    cout << "\nAfter erase:\n";

    for(int x : s)
        cout << x << " ";

    return 0;
}