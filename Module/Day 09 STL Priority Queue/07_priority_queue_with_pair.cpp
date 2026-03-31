// 07_priority_queue_with_pair.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<pair<int,int>> pq;

    pq.push({5,1});
    pq.push({10,2});
    pq.push({7,3});

    while(!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}