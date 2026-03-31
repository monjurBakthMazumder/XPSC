#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello";

    // push
    s.push_back('!');
    
    // pop
    s.pop_back();

    // append
    s.append(" World");

    // +=
    s += "!!!";

    // insert
    s.insert(5, " C++");

    // erase
    s.erase(5, 4);

    // replace
    s.replace(0, 5, "Hi");

    cout << s << endl;

    return 0;
}