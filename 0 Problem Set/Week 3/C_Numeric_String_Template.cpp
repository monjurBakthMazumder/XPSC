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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO\n";
            }
            else
            {
                map<char, int> mp1;
                map<int, char> mp2;

                bool flag = true;

                for (int i = 0; i < n; i++)
                {
                    if (mp1.count(s[i]) && mp1[s[i]] != v[i])
                    {
                        flag = false;
                        break;
                    }

                    if (mp2.count(v[i]) && mp2[v[i]] != s[i])
                    {
                        flag = false;
                        break;
                    }

                    mp1[s[i]] = v[i];
                    mp2[v[i]] = s[i];
                }

                if (flag)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}