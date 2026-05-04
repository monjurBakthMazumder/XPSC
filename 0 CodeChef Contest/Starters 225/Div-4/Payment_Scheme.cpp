#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;
    int ans  = min(300, (100 + (x*4)));
    cout << ans;

    return 0;
}