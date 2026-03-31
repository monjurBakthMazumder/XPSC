#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    multiset<long long> ticket;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ticket.insert(x);
    }
    for (long long i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        auto priceIt = ticket.upper_bound(x);
        if (priceIt != (ticket.begin()--))
        {
            priceIt--;
            cout << *priceIt << endl;
            ticket.erase(priceIt);
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}