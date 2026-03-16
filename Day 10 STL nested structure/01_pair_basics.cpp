// 01_pair_basics.cpp

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int,string> p;

    p.first = 10;
    p.second = "Hello";

    cout << p.first << " " << p.second << endl;

    pair<int,int> p2 = {5,7};

    cout << p2.first << " " << p2.second << endl;

    return 0;
}