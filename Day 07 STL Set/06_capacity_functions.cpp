// 06_capacity_functions.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    cout << "Empty: " << s.empty() << endl;

    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout << "Size: " << s.size() << endl;

    s.clear();

    cout << "After clear size: " << s.size() << endl;

    return 0;
}