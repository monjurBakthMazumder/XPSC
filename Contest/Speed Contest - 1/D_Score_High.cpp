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
        int n, val, ans = 0;
        cin >> n;
        for (int i = 0; i < 4; i++)
        {
            cin >> val;
            if (ans < val)
            {
                ans = val;
            }
        }
        cout << ans << endl;
    }

    return 0;
}