// 05_advanced_features.cpp

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq1 = {1, 2, 3};
    deque<int> dq2 = {4, 5, 6};

    // swap
    dq1.swap(dq2);

    // emplace_back
    dq1.emplace_back(100);

    // emplace_front
    dq1.emplace_front(200);

    // emplace at position
    dq1.emplace(dq1.begin() + 1, 300);

    // shrink_to_fit
    dq1.shrink_to_fit();

    // comparison
    if (dq1 == dq2)
        cout << "Equal\n";

    return 0;
}