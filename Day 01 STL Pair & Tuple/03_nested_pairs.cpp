#include <bits/stdc++.h>
using namespace std;

int main() {
    // Storing: Name, {Roll, Phone}
    pair<string, pair<int, string>> student = {"Monjur", {10, "01313728312"}};

    // Accessing requires chaining .second.first
    cout << "Name: " << student.first << "\n";
    cout << "Roll: " << student.second.first << "\n";
    cout << "Phone: " << student.second.second << "\n";

    // C++17 Structured binding with nested pairs (Pro-tip!)
    auto [name, details] = student;
    auto [roll, phone] = details;
    cout << "\nUnpacked: " << name << ", " << roll << ", " << phone << "\n";

    return 0;
}