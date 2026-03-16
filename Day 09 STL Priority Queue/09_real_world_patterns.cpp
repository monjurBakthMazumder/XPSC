// 09_real_world_patterns.cpp

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5,1,9,3,7};

    priority_queue<int> pq;

    for(int x : arr)
        pq.push(x);

    cout << "Largest 3 elements:\n";

    for(int i=0;i<3;i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}