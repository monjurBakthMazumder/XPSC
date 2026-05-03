#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r;
    cin >> r;

    const double pi = acos(-1); 

    double area = pi * r * r;
    double circumference = 2 * pi * r;

    cout << fixed << setprecision(6);
    cout << area << " " << circumference << "\n";

    return 0;
}