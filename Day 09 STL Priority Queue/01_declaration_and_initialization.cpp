// 01_declaration_and_initialization.cpp

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // declaration
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl;

    // initialization using vector
    vector<int> v = {5,1,9,3};

    priority_queue<int> pq2(v.begin(), v.end());

    cout << "Top of pq2: " << pq2.top() << endl;

    return 0;
}