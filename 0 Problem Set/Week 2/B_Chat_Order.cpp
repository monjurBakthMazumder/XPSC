#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    reverse(v.begin(), v.end());

    map<string, int> mp;
    vector<string> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(v[i]) == mp.end())
        {
            mp[v[i]]++;
            ans.push_back(v[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;

    return 0;
}