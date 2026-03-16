// 06_capacity_and_status.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,int> mp;

    cout << mp.empty() << endl;

    mp[1] = 10;
    mp[2] = 20;

    cout << mp.size() << endl;

    mp.clear();

    cout << mp.empty() << endl;

    return 0;
}