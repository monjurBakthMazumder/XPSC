#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int totalTime = n * k;
        int h = totalTime / 60;
        int m = totalTime - (h * 60);
        cout << h << " " << m << endl;
    }

    return 0;
}