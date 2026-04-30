#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x,p;
    cin >> x >> p;

    double price = p / (1 - x/100);
    cout << fixed << setprecision(2) << price;

    return 0;
}