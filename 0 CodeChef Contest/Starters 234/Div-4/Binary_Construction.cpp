#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s(n, '0');
        s[n - 1] = '1';
        if (n > 2)
            s[0] = '1';
        cout << s << "\n";
    }
}
