// 10_common_mistakes_and_best_practices.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);

    cout << "Top: " << pq.top() << endl;

    // ❌ mistake: accessing empty queue
    pq.pop();
    pq.pop();

    if(!pq.empty())
        cout << pq.top();

    else
        cout << "Queue is empty\n";

    return 0;
}