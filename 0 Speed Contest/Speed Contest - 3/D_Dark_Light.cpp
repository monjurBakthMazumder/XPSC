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
        long long n, k;
        cin >> n >> k;
        if (k == 0)
        {
            if (n % 4 == 4 || n % 4 == 0)
                cout << "Off\n";
            else
                cout << "On\n";
        }
        else
        {
            if (n % 4 == 0)
                cout << "On\n";
            else
                cout << "Ambiguous\n";
        }
    }

    return 0;
}