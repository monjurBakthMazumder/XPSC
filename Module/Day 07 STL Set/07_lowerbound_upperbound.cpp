// 07_lowerbound_upperbound.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {10,20,30,40,50};

    auto lb = s.lower_bound(25);
    auto ub = s.upper_bound(30);

    cout << "Lower Bound of 25: " << *lb << endl;
    cout << "Upper Bound of 30: " << *ub << endl;

    return 0;
}