#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int curr = a[l], count1 = 0, count2 = 0;
        while (l < n && a[l] == curr)
            count1++, l++;
        while (b[r] < curr)
            r++;
        count2++, r++;
        while (r < m && b[r] == curr)
            count2++, r++;
        ans += (1ll * count1 * count2);
    }

    cout << ans;

    return 0;
}