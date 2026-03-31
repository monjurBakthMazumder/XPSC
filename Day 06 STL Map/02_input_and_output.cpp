// 02_input_and_output.cpp

#include <iostream>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> mp;

    for(int i=0;i<n;i++){
        string name;
        int age;
        cin >> name >> age;
        mp[name] = age;
    }

    for(auto p : mp){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}