#include <iostream>
#include <sstream>
using namespace std;

int main() {

    string sentence = "I love C++ STL";
    stringstream ss(sentence);

    string word;

    while(ss >> word)
        cout << word << endl;

    return 0;
}