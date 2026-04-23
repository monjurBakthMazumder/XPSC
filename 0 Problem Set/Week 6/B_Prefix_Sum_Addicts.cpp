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
        long long n, k;
        cin >> n >> k;

        vector<long long> s(k);
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }

        vector<long long> d;
        for (int i = 1; i < k; i++)
        {
            d.push_back(s[i] - s[i - 1]);
        }

        bool ok = true;
        for (int i = 1; i < d.size(); i++)
        {
            if (d[i] < d[i - 1])
            {
                ok = false;
            }
        }

        if (!ok)
        {
            cout << "No\n";
            continue;
        }

        if (k > 1)
        {
            long long first = s[0];
            long long len = n - k + 1;
            long long val = d[0];

            if (first > len * val)
            {
                cout << "No\n";
                continue;
            }
        }

        cout << "Yes\n";
    }

    return 0;
}