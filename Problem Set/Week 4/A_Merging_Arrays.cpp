#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m), ans;
    for (auto &x : v1)
        cin >> x;
    for (auto &x : v2)
        cin >> x;

    int v1_index = 0, v2_index = 0;
    while (v1_index < n && v2_index < m)
    {
        if (v1_index < n && v1[v1_index] <= v2[v2_index])
            ans.push_back(v1[v1_index]), v1_index++;
        else
            ans.push_back(v2[v2_index]), v2_index++;
    }
    while (v1_index < n)
        ans.push_back(v1[v1_index]), v1_index++;
    while (v2_index < m)
        ans.push_back(v2[v2_index]), v2_index++;
    for (int x : ans)
        cout << x << " ";

    return 0;
}