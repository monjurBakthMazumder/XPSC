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
        int n, rating, cost, ans = INT_MAX;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> rating >> cost;
            // cout << rating << " " << cost << endl;
            if (rating >= 7 && cost <= ans)
            {
                ans = cost;
            }
        }
        if (ans == INT_MAX)
            ans = -1;
        cout << ans << endl;
    }

    return 0;
}