#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        map<char, int> mp;
        for (int c : s)
            mp[c]++;
        if (mp.size() > 2)
            cout << "YES\n";
        else if (mp.size() == 1)
            cout << "NO\n";
        else
        {
            int possible = 0;
            for (auto [val, cnt] : mp)
                if (cnt > 1)
                    possible++;
            cout << ((possible == 2) ? "YES" : "NO") << "\n";
        }
    }

    return 0;
}