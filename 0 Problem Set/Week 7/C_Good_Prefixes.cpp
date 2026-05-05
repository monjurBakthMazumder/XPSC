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
        long long n, sum = 0, mx = INT_MIN, good = 0;
        cin >> n;
        vector<long long> v(n);
        for (long long &x : v)
            cin >> x;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            mx = max(mx, v[i]);
            if (sum == 2 * mx)
                good++;
        }

        cout << good << "\n";
    }

    return 0;
}