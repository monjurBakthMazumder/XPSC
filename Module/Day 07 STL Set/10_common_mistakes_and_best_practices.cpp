// 10_common_mistakes_and_best_practices.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1,2,3,4};

    cout << "Mistake: trying index access\n";

    // ❌ Wrong
    // cout << s[0];

    cout << "Correct traversal:\n";

    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    cout << "\n\nSafe erase while iterating:\n";

    for(auto it = s.begin(); it != s.end(); )
    {
        if(*it == 2)
            it = s.erase(it);
        else
            it++;
    }

    for(int x : s)
        cout << x << " ";

    return 0;
}