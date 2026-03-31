#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int time = (t + .5) / a;
    int count = time * b;
    cout << count;
    return 0;
}