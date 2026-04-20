#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;

    int t = 0;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        t++;
        cout << "CASE# " << t << ":\n";
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        while (q--)
        {
            int flag = 0, idx;
            int x;
            cin >> x;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == x)
                {
                    idx = i + 1;
                    flag = 1;
                    break;
                }
            }
            if (flag)
            {
                cout
                    << x << " found at " << idx << "\n";
            }
            else
            {
                cout << x << " not found\n";
            }
        }
    }

    return 0;
}