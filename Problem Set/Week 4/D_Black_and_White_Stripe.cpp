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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = INT_MAX, l = 0, r = 0;
        queue<int> q;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                q.push(r);
            }
            if (r - l + 1 == k)
            {
                int sum = q.size();
                ans = min(ans, sum);
                if (!q.empty() && q.front() == l)
                {
                    q.pop();
                }
                l++;
            }
            r++;
        }
        if (ans == INT_MAX)
            cout << 0 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}