#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            long long int val = a[i] - a[i + 1];
            a[i + 1] += val;
            count += val;
        }
    }

    cout << count;

    return 0;
}