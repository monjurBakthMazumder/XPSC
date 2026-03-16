#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Forward Navigation
    auto it_start = v.begin();  // Points to 1
    auto it_end = v.end();      // Points to the "wall" AFTER 5
    
    // Reverse Navigation
    auto rit_start = v.rbegin(); // Points to 5
    auto rit_end = v.rend();     // Points to the "wall" BEFORE 1

    // Dereferencing and Arithmetic
    cout << *it_start << endl;     // 1
    cout << *(v.end() - 1) << endl; // 5 (Move back 1 from the wall)

    return 0;
}