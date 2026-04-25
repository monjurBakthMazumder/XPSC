#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        int coins = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i + 1 > v[i])
            {
                coins = v[i];
                break;
            }
        }
        cout << coins << "\n";
    }
}
