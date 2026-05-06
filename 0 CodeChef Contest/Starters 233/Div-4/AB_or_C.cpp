#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<long long, long long>> v;

        for (int i = 0; i < n; i++)
            cin >> x >> y >> z, v.push_back({x, i}), v.push_back({y, i}), v.push_back({z, i});

        sort(v.begin(), v.end());

        vector<int> cnt(n, 0);

        long long visit = 0, l = 0, ans = INT_MAX;

        for (long long r = 0; r < (long long)v.size(); r++)
        {
            if (cnt[v[r].second]++ == 0)
                visit++;

            while (visit == n)
            {
                ans = min(ans, v[r].first - v[l].first);

                if (--cnt[v[l].second] == 0)
                    visit--;
                l++;
            }
        }

        cout << ans << "\n";
    }
}
