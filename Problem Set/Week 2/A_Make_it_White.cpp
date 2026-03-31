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
        int n;
        string s;
        cin >> n >> s;
        int start = -1, end = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && start == -1)
            {
                start = i;
                end = i;
            }
            else if (s[i] == 'B')
            {
                end = i;
            }
        }
        int result = end - start;
        result++;
        cout << result << endl;
    }

    return 0;
}