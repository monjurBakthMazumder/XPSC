// 09_complex_nested_structures.cpp

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<int, vector<pair<int,int>>> graph;

    graph[1].push_back({2,5});
    graph[1].push_back({3,7});
    graph[2].push_back({4,2});

    for(auto node : graph)
    {
        cout << node.first << ": ";

        for(auto edge : node.second)
            cout << "(" << edge.first << "," << edge.second << ") ";

        cout << endl;
    }

    return 0;
}