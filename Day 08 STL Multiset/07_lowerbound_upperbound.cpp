// 07_lowerbound_upperbound.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {10,20,20,30,40};

    auto lb = ms.lower_bound(20);
    auto ub = ms.upper_bound(20);

    cout << "Lower bound of 20: " << *lb << endl;
    cout << "Upper bound of 20: " << *ub << endl;

    return 0;
}