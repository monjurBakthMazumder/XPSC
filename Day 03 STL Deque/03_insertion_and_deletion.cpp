// 03_insertion_and_deletion.cpp

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq = {10, 20, 30};

    // push_back
    dq.push_back(40);

    // push_front
    dq.push_front(5);

    // pop_back
    dq.pop_back();

    // pop_front
    dq.pop_front();

    // insert at position
    dq.insert(dq.begin() + 1, 99);

    // erase single element
    dq.erase(dq.begin());

    // erase range
    dq.erase(dq.begin(), dq.begin() + 1);

    // assign
    dq.assign(5, 100);

    // resize
    dq.resize(3);

    // clear
    dq.clear();

    return 0;
}