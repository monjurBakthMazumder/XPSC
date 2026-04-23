#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        v[i] = s1 +"-"+ s2;
    }
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        count++;
    }
    cout << count;

    return 0;
}