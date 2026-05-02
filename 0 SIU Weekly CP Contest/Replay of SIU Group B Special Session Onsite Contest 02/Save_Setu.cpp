#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, tk = 0;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (s == "donate")
        {
            int x;
            cin >> x;
            tk += x;
        }
        else
            cout << tk << "\n";
    }

    return 0;
}