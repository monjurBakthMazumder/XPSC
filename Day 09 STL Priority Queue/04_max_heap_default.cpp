// 04_max_heap_default.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(3);

    cout << "Max Heap order:\n";

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}