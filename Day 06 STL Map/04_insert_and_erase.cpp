// 04_insert_and_erase.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,int> mp;

    // insert()
    mp.insert({1,100});
    mp.insert({2,200});

    // emplace()
    mp.emplace(3,300);

    // erase by key
    mp.erase(2);

    // erase by iterator
    auto it = mp.find(1);
    if(it != mp.end())
        mp.erase(it);

    return 0;
}