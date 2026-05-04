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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        map<int, int> freq;
        for (int &x : v)
            cin >> x, freq[x]++;

        freq.erase(v[0]);

        vector<pair<int, int>> vp;

        for (auto [val, cnt] : freq)
            vp.push_back({cnt, val});

        sort(vp.begin(), vp.end());

        int ans = 1;
        for (auto [cnt, val] : vp)
        {
            int mn = min(cnt, k);
            freq[val] -= mn;
            k -= mn;

            if (freq[val] == 0)
                freq.erase(val);
            if (k == 0)
                break;
        }
        ans += freq.size();
        cout << ans << "\n";
    }

    return 0;
}