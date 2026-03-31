#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. DECLARATION VARIATIONS
    tuple<string, int, double> t1;
    tuple<string, int, double> t2("Alice", 1, 95.5);
    tuple<string, int, string> t3 = make_tuple("Monjur", 10, "01313728312");
    tuple<string, int, string> t4 = {"Masum", 1, "0179860065"}; // Initializer list

    // 2. GETTING INPUT
    tuple<int, int, int> coordinates;
    cout << "Enter X, Y, Z coordinates: ";
    // Like pairs, you must input individual elements. You use get<Index>()
    cin >> get<0>(coordinates) >> get<1>(coordinates) >> get<2>(coordinates);

    // 3. OUTPUT VARIATIONS
    // Method A: Using get<index>
    cout << "Coordinates: " << get<0>(coordinates) << ", " 
         << get<1>(coordinates) << ", " << get<2>(coordinates) << "\n";

    // Method B: C++17 Structured Binding (Highly Recommended)
    auto [name, roll, phone] = t4;
    cout << "Student: " << name << ", Roll: " << roll << ", Phone: " << phone << "\n";

    return 0;
}