#include <bits/stdc++.h>
using namespace std;
int m, n, x;
vector<int> v;

bool is_possible(int day)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int person = v[i] / day;
        cnt += person;
    }
    return cnt >= m;
}
int main()
{
    // your code goes here
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> x, v.push_back(x);
    int l = 1, r = *max_element(v.begin(), v.end());
    int duration = 0;
    while (l <= r)
    {
        int day = (l + r) / 2;
        if (is_possible(day))
            duration = day, l = day + 1;
        else
            r = day - 1;
    }
    cout << duration;
}
