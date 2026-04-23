#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> v(n);
    for (long long &x : v)
        cin >> x;

    int l = 0, r = 0, ans = INT_MAX;
    long long sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << (ans == INT_MAX ? -1 : ans) << '\n';

    return 0;
}