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
        string s;
        cin >> s;
        if (s.size() < 11)
            cout << s << "\n";
        else
            cout << s[0] << s.size() - 2 << s.back() << "\n";
    }

    return 0;
}