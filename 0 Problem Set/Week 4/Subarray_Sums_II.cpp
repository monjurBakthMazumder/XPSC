#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<long long> a(n);

    for (auto &val : a)
        cin >> val;

    vector<long long> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    long long count = 0;
    map<long long, long long> mp;

    mp[0] = 1;

    for (int r = 1; r <= n; r++)
    {
        long long y = pre[r] - x;
        count += mp[y];
        mp[pre[r]]++;
    }

    cout << count;

    return 0;
}