// Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int length = (b + (b-1)) / c;
    int val = -1;
    for (int i = 0; i < length; i++)
    {
        long long int multiple = c * i;
        if (multiple < b && multiple > a)
        {
            val = multiple;
            break;
        }
    }

    cout << val;

    return 0;
}