// 02_input_and_output.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    cout << "Sorted elements with duplicates:\n";

    for(int x : ms)
        cout << x << " ";

    return 0;
}