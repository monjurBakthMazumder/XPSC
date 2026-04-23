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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] % 2 == v[i + 1] % 2)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}