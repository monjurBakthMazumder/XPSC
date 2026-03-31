#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        int Alice = (y / 2) + (x / 2);
        int Bob = (y / 2) - (x / 2);
        if (y % 2 == 1)
        {
            Alice++;
        }

        cout << Alice << " " << Bob << endl;
    }
}
