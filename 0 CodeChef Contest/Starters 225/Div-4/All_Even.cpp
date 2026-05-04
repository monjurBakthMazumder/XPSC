#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
                odd++;
        }
        if (odd % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}