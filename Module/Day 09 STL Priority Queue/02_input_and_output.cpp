// 02_input_and_output.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    cout << "Priority Queue elements (largest first):\n";

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}