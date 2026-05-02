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
        int match = 0;
        if (s[0] == 't')
            match++;
        if (s[1] == 'w')
            match++;
        if (s[2] == 'o')
            match++;

        if (s.length() == 5)
            cout << 3 << "\n";
        else if (match >= 2)
            cout << 2 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}
