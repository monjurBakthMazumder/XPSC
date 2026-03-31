// 10_common_mistakes_and_best_practices.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    cout << "===== MISTAKE 1: Accidental Key Creation =====\n";

    map<int,string> mp;

    mp[1] = "One";

    // This creates key 5 automatically!
    cout << mp[5] << endl;   // BAD PRACTICE

    cout << "Size after accessing mp[5]: " << mp.size() << endl;


    cout << "\n===== BEST PRACTICE: Safe Access =====\n";

    if(mp.find(10) != mp.end())
        cout << "Key 10 exists\n";
    else
        cout << "Key 10 does not exist\n";


    cout << "\n===== MISTAKE 2: Index-Based Loop =====\n";

    // WRONG:
    // for(int i=0;i<mp.size();i++)  ❌
    // map is not index-based


    cout << "\n===== CORRECT: Iterator Loop =====\n";

    for(auto it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " -> " << it->second << endl;


    cout << "\n===== MISTAKE 3: Erasing While Iterating =====\n";

    map<int,int> test = {
        {1,10},
        {2,20},
        {3,30}
    };

    // WRONG WAY (may crash)
    /*
    for(auto it = test.begin(); it != test.end(); it++){
        if(it->first == 2)
            test.erase(it);   // dangerous
    }
    */


    cout << "\n===== CORRECT ERASE METHOD =====\n";

    for(auto it = test.begin(); it != test.end(); ){
        if(it->first == 2)
            it = test.erase(it);  // safe
        else
            ++it;
    }

    for(auto p : test)
        cout << p.first << " -> " << p.second << endl;


    cout << "\n===== CONST ITERATOR BEST PRACTICE =====\n";

    const map<int,int> constMap = {
        {10,100},
        {20,200}
    };

    for(auto it = constMap.begin(); it != constMap.end(); it++)
        cout << it->first << " -> " << it->second << endl;


    cout << "\n===== PERFORMANCE TIP =====\n";

    cout << "Use unordered_map if order is not needed.\n";
    cout << "Use reserve in unordered_map for large input.\n";

    return 0;
}