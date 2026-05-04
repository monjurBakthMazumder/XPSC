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
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        n = v.size();

        for (int i = 0; i < n - 1; i++)
            while (2 * v[i] < v[n - 1])
                v[i] *= 2;

        sort(v.begin(), v.end());

        int ans = v[n - 1] - v[0];
        for (int i = 0; i < n - 1; i++)
        {
            int mx = v[i] * 2;
            int mn = v[i + 1];
            ans = min(ans, mx - mn);
        }

        cout << ans << "\n";
    }

    return 0;
}