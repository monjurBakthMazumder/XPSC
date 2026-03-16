// 01_declaration_and_initialization.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // declaration
    multiset<int> ms;

    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.insert(5);

    cout << "Multiset elements:\n";

    for(int x : ms)
        cout << x << " ";

    cout << endl;

    // initialization
    multiset<int> ms2 = {4,1,3,2,2,5};

    cout << "Initialized multiset:\n";

    for(int x : ms2)
        cout << x << " ";

    return 0;
}