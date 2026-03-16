// 10_real_world_patterns.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int,int>> students = {
        {90,1},
        {85,2},
        {92,3},
        {80,4}
    };

    sort(students.begin(), students.end());

    cout << "Sorted by marks:\n";

    for(auto p : students)
        cout << p.first << " " << p.second << endl;

    return 0;
}