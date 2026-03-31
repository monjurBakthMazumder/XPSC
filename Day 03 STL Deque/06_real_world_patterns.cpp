// 06_real_world_patterns.cpp

#include <iostream>
#include <deque>
using namespace std;

int main() {

    // 1. Sliding Window Example
    deque<int> dq;
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    for (int i = 0; i < 8; i++) {

        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }

    return 0;
}