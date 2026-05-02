#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, count = 0;
    cin >> a >> b >> c;

    for (int i = a; i <= b; i++)
        if (c % i == 0)
            count++;
    cout << count << "\n";

    return 0;
}