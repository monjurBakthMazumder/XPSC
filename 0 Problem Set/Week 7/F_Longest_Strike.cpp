#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        vector<int> v(n), good;
        map<int, int> freq;

        for (int &x : v)
            cin >> x, freq[x]++;

        for (auto [val, f] : freq)
            if (f >= k)
                good.push_back(val);

        if (good.empty())
        {
            cout << -1 << "\n";
            continue;
        }

        int best_l = good[0], best_r = good[0], l = 0;

        for (int r = 1; r < good.size(); r++)
        {
            if (good[r] != good[r - 1] + 1)
                l = r;

            if (good[r] - good[l] > best_r - best_l)
                best_l = good[l], best_r = good[r];
        }

        cout << best_l << " " << best_r << "\n";
    }

    return 0;
}