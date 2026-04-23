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
        vector<int> b(n), c, ans;
        for (int &x : b)
            cin >> x;

        c = b;
        sort(c.begin(), c.end());

        for (int i = 0; i < n; i++)
            if (b[i] != c[i])
                ans.push_back(b[i]);

        if (ans.size())
        {
            cout << "YES\n"
                 << ans.size() << "\n";
            for (int x : ans)
                cout << x << " ";
            cout << "\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}