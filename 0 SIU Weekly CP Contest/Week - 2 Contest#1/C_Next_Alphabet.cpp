#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    cin >> c;
    if (c == 'z')
        c = 'a';
    else
        c++;
    cout << c;

    return 0;
}