// 03_traversal_methods.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> mp = {
        {1,"A"},
        {2,"B"},
        {3,"C"}
    };

    // Range-based for loop
    for(auto p : mp)
        cout << p.first << " " << p.second << endl;

    cout << "----\n";

    // Iterator traversal
    for(auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;

    cout << "----\n";

    // Reverse traversal
    for(auto it = mp.rbegin(); it != mp.rend(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}