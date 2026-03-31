// 02_input_and_output.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "Sorted Unique Elements:\n";

    for(int x : s)
        cout << x << " ";

    return 0;
}