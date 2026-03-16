// 10_common_mistakes_and_best_practices.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {1,2,2,3,4};

    cout << "Mistake: expecting unique values\n";

    for(int x : ms)
        cout << x << " ";

    cout << "\n\nErase only ONE occurrence:\n";

    auto it = ms.find(2);

    if(it != ms.end())
        ms.erase(it);

    for(int x : ms)
        cout << x << " ";

    return 0;
}