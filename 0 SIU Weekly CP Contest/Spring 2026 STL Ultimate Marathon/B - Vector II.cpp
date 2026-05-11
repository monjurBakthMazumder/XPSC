#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, instruction, idx, val;
    cin >> n >> q;
    vector<vector<int>> v(n);
    while (q--){
        cin >> instruction >> idx;
        if (instruction == 0) cin >> val, v[idx].push_back(val);
        else if (instruction == 1) {
            if (v[idx].size()) cout << v[idx][0];
            for (int i = 1; i < v[idx].size(); i++) cout << " " << v[idx][i];
            cout << "\n"; }
        else if (instruction == 2) v[idx].clear();}
    return 0;
}