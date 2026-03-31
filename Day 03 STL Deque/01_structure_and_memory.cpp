// 01_structure_and_memory.cpp

#include <iostream>
#include <deque>
using namespace std;

int main() {

    // 1. Declaration
    deque<int> dq;

    // 2. Initialization
    deque<int> dq2 = {10, 20, 30, 40};

    // 3. Size
    cout << "Size: " << dq2.size() << endl;

    // 4. Access
    cout << "Front: " << dq2.front() << endl;
    cout << "Back: " << dq2.back() << endl;

    // 5. Random Access
    cout << "Index 2: " << dq2[2] << endl;

    // 6. Safe Access
    cout << "Using at(): " << dq2.at(1) << endl;

    // 7. Empty Check
    cout << "Is Empty: " << dq.empty() << endl;

    return 0;
}