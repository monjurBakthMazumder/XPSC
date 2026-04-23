#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, num, operation = 0;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < x; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            operation++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            operation++;
            break;
        }
    }
    cout << operation << endl;
    return 0;
}