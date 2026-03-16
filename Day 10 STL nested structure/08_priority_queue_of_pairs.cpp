// 08_priority_queue_of_pairs.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<pair<int,int>> pq;

    pq.push({10,1});
    pq.push({5,2});
    pq.push({20,3});

    while(!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}