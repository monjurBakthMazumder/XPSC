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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);

        for (int &x : v)
            cin >> x;

        int l = 0, r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += v[r];

            if (sum == s)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (sum > s && l < r)
                {
                    sum -= v[l];
                    l++;
                }
            }

            r++;
        }
        if (ans == 0)
        {
            cout << -1 << "\n";
        }
        else
            cout << n - ans << "\n";
    }

    return 0;
}