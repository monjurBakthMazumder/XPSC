#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    reverse(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
        cout << v[i] << " ";
    cout << v[n - 1] << "\n";
    return 0;
}