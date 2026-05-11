#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    int q, instruction, val;
    cin >> q;
    while (q--)
    {
        cin >> instruction;
        if (instruction == 0)
            cin >> val, v.push_back(val);
        else if (instruction == 1)
            cin >> val, cout << v[val] << "\n";
        if (instruction == 2)
            v.pop_back();
    }
    return 0;
}