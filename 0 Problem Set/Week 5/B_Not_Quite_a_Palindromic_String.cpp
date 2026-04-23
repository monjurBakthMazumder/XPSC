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
        int n, k;
        string s;
        cin >> n >> k >> s;
        map<char, int> mp;

        for (char c : s)
            mp[c]++;

        int ans_0 = mp['0'];
        int ans_1 = mp['1'];

        int different = (abs(ans_0 - ans_1)) / 2;

        if (k < different)
            cout << "NO\n";
        else if ((k - different) % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}