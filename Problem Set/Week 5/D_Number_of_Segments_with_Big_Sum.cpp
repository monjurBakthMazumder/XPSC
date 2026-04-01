#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    int l = 0, r = 0;
    long long ans = 0, sum = 0;

    while (r < n)
    {
        sum += v[r];

        if (sum >= s)
        {
            ans += n - r;
            while (sum >= s)
            {
                sum -= v[l];
                if (sum >= s)
                {
                    ans += n - r;
                }
                l++;
            }
        }

        r++;
    }
    cout << ans;

    return 0;
}