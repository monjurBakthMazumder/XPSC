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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        map<long long, long long> freq;

        for (auto x : a)
        {
            freq[x]++;
        }

        long long ans = 0;

        for (auto [x, f] : freq)
        {
            long long prev = freq[x - 1];
            if (f > prev)
            {
                ans += (f - prev);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}