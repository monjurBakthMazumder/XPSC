// 06_sorted_output.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    int arr[] = {7,2,9,4,1};

    for(int x : arr)
        pq.push(x);

    cout << "Sorted descending:\n";

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}