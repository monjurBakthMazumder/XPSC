#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = (double)a / b;

    cout << d << " " << r << " ";
    cout << fixed << setprecision(5) << f << "\n";

    return 0;
}