#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = INT_MIN, mn = INT_MAX, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x, mx = max(mx, x), mn = min(mn, x);
        for (int x : v)
            if (x != mx && x != mn)
                ans++;
        cout << ans << "\n";
    }
}
