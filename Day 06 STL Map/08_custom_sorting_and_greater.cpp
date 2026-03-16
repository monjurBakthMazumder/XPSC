// 08_custom_sorting_and_greater.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string, greater<int>> mp;

    mp[10] = "Ten";
    mp[20] = "Twenty";
    mp[5] = "Five";

    for(auto p : mp)
        cout << p.first << " ";

    return 0;
}