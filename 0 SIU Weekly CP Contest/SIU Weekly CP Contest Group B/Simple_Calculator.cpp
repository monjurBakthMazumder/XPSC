#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char c;
    while (cin >> a >> c >> b)
    {
        if (c == '?')
            break;

        if (c == '+')
            cout << a + b << "\n";
        else if (c == '-')
            cout << a - b << "\n";
        else if (c == '*')
            cout << a * b << "\n";
        else if (c == '/')
            cout << a / b << "\n";
    }

    return 0;
}