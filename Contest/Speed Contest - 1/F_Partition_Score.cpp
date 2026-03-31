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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int score = v[0] + v[n - 1] + v[n-2] + v[n-k-1];
        if(k ==1){
            score = v[0]+ v[n-2]  + v[n - 1]  + v[n - 1] ;
        }
        cout << score << endl;
    }

    return 0;
}