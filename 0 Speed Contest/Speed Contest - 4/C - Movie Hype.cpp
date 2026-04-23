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
        vector<int> v(n + 1);
        for (int &x : v)
            cin >> x;

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int mx = max(v[i], v[i + 1]);
            ans = min(mx, ans);
        }

        cout << ans << endl;
    }

    return 0;
}