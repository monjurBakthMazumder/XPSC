#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, instruction, val; set<int> st; cin >> t;
    while (t--){
        cin >> instruction >> val;
        if(instruction == 1) st.insert(val);
        else if(instruction == 2) st.erase(val);
        else cout << ((st.find(val) != st.end())? "Yes" : "No") << "\n";}
    return 0;
}