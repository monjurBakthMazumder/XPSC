#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << (n / 60) / 60 << ":" << (n / 60) % 60 << ":" << n % 60 << "\n";

    return 0;
}