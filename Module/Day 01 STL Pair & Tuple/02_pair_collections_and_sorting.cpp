#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    // Vector of pairs is generally preferred over pair arrays (pair<string, int> arr[n])
    vector<pair<string, int>> students; 

    // 1. TAKING INPUT INTO A VECTOR OF PAIRS
    cout << "Enter 3 students (Name and Score):\n";
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        // Two ways to push to vector:
        // students.push_back({name, score}); 
        students.emplace_back(name, score); // emplace_back is slightly faster
    }

    // 2. SORTING PAIRS
    // By default, sort() orders by the '.first' element. 
    // If '.first' is tied, it sorts by the '.second' element.
    sort(students.begin(), students.end());

    // 3. OUTPUTTING COLLECTIONS
    cout << "\nSorted List (Alphabetically by name):\n";
    for (auto [name, score] : students) {
        cout << name << " : " << score << "\n";
    }

    return 0;
}