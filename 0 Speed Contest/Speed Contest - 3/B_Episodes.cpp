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
        int n, s;
        cin >> n >> s;
        int time = n * s;
        int h = time / 60;
        int min = time - (h * 60);
        cout << h << " " << min << endl;
    }

    return 0;
}