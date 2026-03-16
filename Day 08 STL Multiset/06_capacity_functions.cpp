// 06_capacity_functions.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    cout << "Empty: " << ms.empty() << endl;

    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    cout << "Size: " << ms.size() << endl;

    ms.clear();

    cout << "Size after clear: " << ms.size() << endl;

    return 0;
}