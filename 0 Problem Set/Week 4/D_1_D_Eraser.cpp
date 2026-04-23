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
        int n, k, count = 0;
        string s;
        cin >> n >> k >> s;

        for (int i = 0; i < n;)
        {
            if (s[i] == 'B')
                i += k, count++;
            else
                i++;
        }

        cout << count << "\n";
    }

    return 0;
}