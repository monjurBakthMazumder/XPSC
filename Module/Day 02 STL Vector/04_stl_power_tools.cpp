#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate

using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 8};

    // 1. Sorting
    sort(v.begin(), v.end());                // Ascending
    sort(v.rbegin(), v.rend());              // Descending

    // 2. Searching (Binary Search needs a sorted vector!)
    sort(v.begin(), v.end());
    bool found = binary_search(v.begin(), v.end(), 4);

    // 3. Finding Bounds
    // lower_bound: First element >= X
    // upper_bound: First element > X
    auto lb = lower_bound(v.begin(), v.end(), 2); 
    cout << "First element >= 2 is at index: " << (lb - v.begin()) << endl;

    // 4. Min/Max
    int max_val = *max_element(v.begin(), v.end());
    int min_val = *min_element(v.begin(), v.end());

    // 5. Utility
    reverse(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0); // Sum of all elements

    return 0;
}