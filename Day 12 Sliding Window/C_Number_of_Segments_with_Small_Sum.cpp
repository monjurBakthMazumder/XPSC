#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int l = 0, r = 0;
    long long sum = 0, ans = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
            ans += r - l + 1;
        else
        {
            while (sum > k && l <= r)
                sum -= v[l], l++;
            if (sum <= k)
                ans += r - l + 1;
        }
        r++;
    }
    cout << ans;

    return 0;
}