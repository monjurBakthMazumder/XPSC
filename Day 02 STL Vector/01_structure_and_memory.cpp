#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Capacity vs Size
    v.push_back(40); 
    cout << "Size: " << v.size() << endl;         // 4 elements
    cout << "Capacity: " << v.capacity() << endl; // Likely 6 or 8 (pre-allocated)

    // Optimization: If you know you need 1000 elements, reserve them 
    // to avoid multiple re-allocations (which are O(N)).
    v.reserve(1000); 

    // Accessors
    int first = v.front(); // v[0]
    int last = v.back();   // v[v.size()-1]
    int *ptr = v.data();   // Pointer to the underlying array

    return 0;
}