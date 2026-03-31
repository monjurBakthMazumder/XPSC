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
        int n, q;
        cin >> n >> q;

        vector<long long> v(n + 1), pre(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pre[i] = pre[i - 1] + v[i];
        }

        long long total = pre[n];

        while (q--)
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long segment = pre[r] - pre[l - 1];
            long long len = r - l + 1;

            long long new_sum = total - segment + k * len;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}