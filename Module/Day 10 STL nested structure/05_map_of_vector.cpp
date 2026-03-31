// 05_map_of_vector.cpp

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<int, vector<int>> graph;

    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);

    for(auto p : graph)
    {
        cout << p.first << ": ";

        for(int x : p.second)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}