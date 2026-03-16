// 04_stl_power_tools.cpp

#include <iostream>
#include <deque>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    deque<int> dq = {5, 1, 4, 2, 3};

    // sort
    sort(dq.begin(), dq.end());

    // reverse
    reverse(dq.begin(), dq.end());

    // count
    cout << "Count of 3: " << count(dq.begin(), dq.end(), 3) << endl;

    // find
    auto it = find(dq.begin(), dq.end(), 4);
    if (it != dq.end())
        cout << "Found 4" << endl;

    // min
    cout << "Min: " << *min_element(dq.begin(), dq.end()) << endl;

    // max
    cout << "Max: " << *max_element(dq.begin(), dq.end()) << endl;

    // sum
    cout << "Sum: " << accumulate(dq.begin(), dq.end(), 0) << endl;

    return 0;
}