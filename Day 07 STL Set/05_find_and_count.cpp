// 05_find_and_count.cpp

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {5,10,15,20};

    // find
    auto it = s.find(10);

    if(it != s.end())
        cout << "Found\n";
    else
        cout << "Not Found\n";

    // count
    cout << "Count of 10: " << s.count(10) << endl;

    return 0;
}