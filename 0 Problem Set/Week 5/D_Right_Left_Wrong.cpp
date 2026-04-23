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
        vector<long long> v(n), pre_sum(n);
        for (long long &x : v)
            cin >> x;
        string s;
        cin >> s;

        pre_sum[0] = v[0];
        for (int i = 1; i < n; i++)
            pre_sum[i] = v[i] + pre_sum[i - 1];

        long long sum = 0, l = 0, r = n - 1;
        while (l < r)
        {
            while (l < n && s[l] != 'L')
                l++;
            while (r >= 0 && s[r] != 'R')
                r--;
            if (l < r)
            {
                if (l == 0)
                    sum += pre_sum[r];
                else
                    sum += pre_sum[r] - pre_sum[l - 1];

                l++, r--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}