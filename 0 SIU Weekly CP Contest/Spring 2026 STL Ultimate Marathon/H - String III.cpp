#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; string s; cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (i % 2 == 0) (s[i] == 'a') ? s[i] = 'b' : s[i] = 'a';
            else (s[i] == 'z') ? s[i] = 'y' : s[i] = 'z';
        cout << s << "\n";
    }
    return 0;
}