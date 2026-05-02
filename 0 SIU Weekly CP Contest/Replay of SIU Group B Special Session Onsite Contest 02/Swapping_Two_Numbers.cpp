#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    while (cin >> x >> y)
        if (x == 0 && y == 0)
            break;
        else if (x <= y)
            cout << x << " " << y << "\n";
        else
            cout << y << " " << x << "\n";

    return 0;
}