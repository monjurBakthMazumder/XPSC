#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string s = string(1, v[i]) + string(1, v[i + 1]);
        mp[s]++;
    }

    int max_count = 0;
    string result;

    for (auto &p : mp)
    {
        if (p.second > max_count)
        {
            max_count = p.second;
            result = p.first;
        }
    }

    cout << result;

    return 0;
}