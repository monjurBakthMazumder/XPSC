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

        vector<long long> a(n), h(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : h)
            cin >> x;

        if (n == 1)
        {
            if (a[0] <= k)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
            continue;
        }

        int l = 0, r = 1, len = 0;
        long long sub_sum = a[0];

        if (a[0] <= k)
            len = 1;

        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
                sub_sum += a[r];
            else
            {
                l = r;
                sub_sum = a[r];
                if (sub_sum <= k)
                    len = max(len, 1);
                r++;
                continue;
            }
            while (l <= r && sub_sum > k)
            {
                sub_sum -= a[l];
                l++;
            }

            len = max(len, r - l + 1);
            r++;
        }

        cout << len << "\n";
    }

    return 0;
}