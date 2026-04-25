#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max_val = 0, max_count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > max_count)
            {
                max_val = it->first;
                max_count = it->second;
            }
        }
        cout << max_val << "\n";
    }
}
