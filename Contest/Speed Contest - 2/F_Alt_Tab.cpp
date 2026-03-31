#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n), v1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] > 0)
        {
            v1.push_back(v[i]);
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        string s = v1[i];
        cout << s[s.size() - 2] << s[s.size() - 1];
        // if (s.size() >= 2){
        // }
    }

    return 0;
}