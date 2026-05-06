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
        int a, b, x;
        cin >> a >> b >> x;
        if((a <= x && b <=x ) || a*b <= x*x) cout << 0 << "\n";
        else if(a <= x || b <=x || a <= x*x || b <= x*x)cout << 1 << "\n";
        else cout << 2 << "\n";
    }

    return 0;
}