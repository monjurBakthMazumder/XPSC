#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, a;
    cin >> n >> k >> a;

    long long mul = n * k;

    if (mul % a != 0)
    {
        cout << "double";
    }
    else
    {
        long long result = mul / a;

        if (result >= INT_MIN && result <= INT_MAX)
            cout << "int";
        else
            cout << "long long";
    }
    return 0;
}