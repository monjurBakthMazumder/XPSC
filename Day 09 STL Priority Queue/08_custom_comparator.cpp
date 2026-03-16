// 08_custom_comparator.cpp

#include <iostream>
#include <queue>
using namespace std;

struct Compare
{
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    priority_queue<int, vector<int>, Compare> pq;

    pq.push(10);
    pq.push(2);
    pq.push(7);

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}