#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. DECLARATION VARIATIONS
    pair<string, int> p1; // Uninitialized (string is "", int is 0)
    pair<string, int> p2("Alice", 20); // Direct initialization
    pair<string, int> p3 = make_pair("Bob", 22); // Using make_pair
    pair<string, int> p4 = {"Charlie", 25}; // C++11 initializer list (Most common/cleanest)

    // 2. GETTING INPUT
    pair<int, int> p_input;
    cout << "Enter two numbers: ";
    // You cannot cin >> p_input directly. You must input .first and .second
    cin >> p_input.first >> p_input.second; 

    // 3. OUTPUT VARIATIONS
    // Traditional output
    cout << "Traditional: " << p4.first << " - " << p4.second << "\n";

    // C++17 Structured Binding (The cleanest way to unpack)
    auto [name, age] = p4; 
    cout << "Structured Binding: " << name << " - " << age << "\n";

    // Reassigning values using structured binding by reference (&)
    auto& [ref_name, ref_age] = p4;
    ref_name = "Charlie Updated";
    cout << "Updated inside pair: " << p4.first << "\n";

    return 0;
}