#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Insert 15 at index 1
    v.insert(v.begin() + 1, 15); // {10, 15, 20, 30}

    // Erase the element at index 2
    v.erase(v.begin() + 2);      // {10, 15, 30}

    // Erase a range (from index 0 to 1)
    v.erase(v.begin(), v.begin() + 2); // {30}

    // Fast clearing
    v.clear(); // Size becomes 0, but capacity usually remains the same
    
    return 0;
}