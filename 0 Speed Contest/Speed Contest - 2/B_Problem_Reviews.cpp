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
        int n, s, flag = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s <= 4)
            {
                flag = 0;
                // break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}