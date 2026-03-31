// 07_lowerbound_upperbound.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> mp = {
        {10,"A"},
        {20,"B"},
        {30,"C"},
        {40,"D"}
    };

    // lower_bound
    auto lb = mp.lower_bound(25);
    if(lb != mp.end())
        cout << "Lower Bound: " << lb->first << endl;

    // upper_bound
    auto ub = mp.upper_bound(30);
    if(ub != mp.end())
        cout << "Upper Bound: " << ub->first << endl;

    return 0;
}