// 03_basic_operations.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(40);
    pq.push(20);

    cout << "Top: " << pq.top() << endl;

    pq.pop();

    cout << "Top after pop: " << pq.top() << endl;

    cout << "Size: " << pq.size() << endl;

    cout << "Empty: " << pq.empty() << endl;

    return 0;
}