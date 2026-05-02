#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int t = 1;

    while (cin >> s)
    {
        if (s == "*")
            break;

        cout << "Case " << t++ << ": ";

        if (s == "Hajj")
            cout << "Hajj-e-Akbar\n";
        else if (s == "Umrah")
            cout << "Hajj-e-Asghar\n";
    }

    return 0;
}