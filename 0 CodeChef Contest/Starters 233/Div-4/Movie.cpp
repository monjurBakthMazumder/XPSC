#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, m, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> a >> b >> c;
        int limit = min(m, n);
        cout << (c * limit + (a * (n - limit)) + (b * (m - limit))) << "\n";
    }
}
