// 05_find_and_search.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> mp = {
        {10,"Ten"},
        {20,"Twenty"}
    };

    // find
    auto it = mp.find(20);

    if(it != mp.end())
        cout << "Found: " << it->second << endl;

    return 0;
}