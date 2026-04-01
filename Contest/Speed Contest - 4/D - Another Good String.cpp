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
        int n, q;
        string s;
        cin >> n >> q >> s;
        int ans = 1, new_ans = 1;
        int l = 0, r = 1;
        while (r < n)
        {
            if (s[l] != s[r])
            {
                ans = max(ans, r - l);
                l = r;
            }
            r++;
        }
        ans = max(ans, r - l);

        cout << ans << " ";
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] == s[n - 1])
                new_ans++;
            else
                break;
        }
        while (q--)
        {
            char c;
            cin >> c;
            if (s.back() == c)
                new_ans++;
            else
                new_ans = 1;
            s.push_back(c);
            ans = max(ans, new_ans);
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}