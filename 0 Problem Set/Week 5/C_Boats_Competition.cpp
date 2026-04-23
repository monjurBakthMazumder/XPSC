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
        map<int, int> mp;

        for (int &x : v)
            cin >> x, mp[x]++;

        int ans = 0;

        for (int s = 2; s <= 2 * n; s++)
        {
            int cnt = 0;
            for (auto [x, cnt_x] : mp)
            {
                int y = s - x;
                if (mp.find(y) != mp.end())
                {
                    cnt += min(cnt_x, mp[y]);
                }
            }
            cnt /= 2;
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }

    return 0;
}