#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int flag = 0;

    while (getline(cin, s))
    {
        for (char c : s)
        {
            if (c == '"')
            {
                if (flag % 2 == 0)
                    cout << "``";
                else
                    cout << "''";

                flag++;
            }
            else
            {
                cout << c;
            }
        }
        cout << '\n';
    }

    return 0;
}