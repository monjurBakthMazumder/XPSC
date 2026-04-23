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
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (char c : s)
            mp[c]++;
        int flag = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)

        {
            if (it->second > 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}