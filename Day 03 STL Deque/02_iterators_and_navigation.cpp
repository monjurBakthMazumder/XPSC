// 02_iterators_and_navigation.cpp

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq = {1, 2, 3, 4, 5};

    // Forward iteration
    cout << "Forward: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    // Reverse iteration
    cout << "Reverse: ";
    for (auto it = dq.rbegin(); it != dq.rend(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}