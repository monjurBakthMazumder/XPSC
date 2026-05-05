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
        int n, s, m, end = 0;
        cin >> n >> s >> m;
        bool flag = false;

        while (n--)
        {
            int l, r;
            cin >> l >> r;
            (l - end >= s) ? flag = true : end = r;
        }
        if (!flag && m - end >= s)
            flag = true;
        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}