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
        if (s == "#")
            break;

        cout << "Case " << t++ << ": ";

        if (s == "HELLO")
            cout << "ENGLISH\n";
        else if (s == "HOLA")
            cout << "SPANISH\n";
        else if (s == "HALLO")
            cout << "GERMAN\n";
        else if (s == "BONJOUR")
            cout << "FRENCH\n";
        else if (s == "CIAO")
            cout << "ITALIAN\n";
        else if (s == "ZDRAVSTVUJTE")
            cout << "RUSSIAN\n";
        else
            cout << "UNKNOWN\n";
    }

    return 0;
}