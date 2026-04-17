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
        int n, x;
        cin >> n;
        map<long long, long long> mp;
        for (int i = 0; i < n; i++)
            cin >> x, mp[x]++;
        int max_val = 0;
        for (auto &p : mp)
        {
            max_val = max(max_val, (int)p.second);
        }
        if (max_val == n)
        {
            cout << 0 << "\n";
            continue;
        }
        int ans = 0, rest = n - max_val;
        while (rest > 0)
        {
            ans++;
            int take = min(max_val, rest);
            ans += take;
            rest -= take;
            max_val *= 2;
        }
        cout << ans << "\n";
    }

    return 0;
}