// 01_declaration_and_initialization.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    // Basic declaration
    map<int, string> mp;

    // Initialization with values
    map<int, string> mp2 = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"}
    };

    // Insert using []
    mp[10] = "Ten";
    mp[20] = "Twenty";

    cout << mp2[2] << endl;

    return 0;
}