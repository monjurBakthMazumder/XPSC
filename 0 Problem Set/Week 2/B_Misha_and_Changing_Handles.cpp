#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (i == 0)
            v.push_back({s1, s2});
        else
        {
            int flag = 1;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j].second == s1)
                {
                    v[j].second = s2;
                    flag = 0;
                    break;
                }
            }
            if (flag)
                v.push_back({s1, s2});
        }
    }
    cout << v.size() << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j].first << " " << v[j].second << endl;
    }

    return 0;
}