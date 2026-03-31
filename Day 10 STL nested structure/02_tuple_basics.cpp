// 02_tuple_basics.cpp

#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    tuple<int,string,double> t;

    t = make_tuple(1,"C++",3.14);

    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

    return 0;
}