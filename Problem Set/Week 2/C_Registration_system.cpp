#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    while (n--)
    {
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] << endl;
        }
        mp[s]++;
    }

    return 0;
}