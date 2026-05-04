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
        int n, ans = 0, l = 0, r = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        for (int i = 0; i < n; i++)
            v[i] != 0 ? ans = max(ans, ++cnt) : cnt = 0;
        cout << ans << "\n";
    }

    return 0;
}