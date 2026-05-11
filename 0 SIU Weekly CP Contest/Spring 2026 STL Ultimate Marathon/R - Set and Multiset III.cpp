#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x,y, level; set<int> st;
    cin >> n >> x;
    while (x--) cin >> level, st.insert(level);
    cin >> y; 
    while (y--) cin >> level, st.insert(level); 
    auto it = st.rbegin();
    cout << ((*it == n) ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}