// 01_declaration_and_initialization.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Basic declaration
    set<int> s;

    // Insert values
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    // Initialization
    set<int> s2 = {4,1,7,3,3,2};

    cout << "Set elements:\n";
    for(int x : s2)
        cout << x << " ";

    return 0;
}