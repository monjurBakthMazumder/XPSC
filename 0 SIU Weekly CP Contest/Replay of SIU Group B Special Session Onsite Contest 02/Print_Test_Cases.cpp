#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 1;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << "Case " << t++ << ": " << n << "\n";
    }
    return 0;
}