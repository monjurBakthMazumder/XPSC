// 09_real_world_patterns.cpp

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    cout << "===== CHARACTER FREQUENCY =====\n";

    string s = "monjurmazumder";

    map<char,int> charFreq;

    for(char c : s)
        charFreq[c]++;

    for(auto p : charFreq)
        cout << p.first << " -> " << p.second << endl;


    cout << "\n===== WORD FREQUENCY =====\n";

    vector<string> words = {"apple","banana","apple","orange","banana","apple"};

    map<string,int> wordFreq;

    for(auto w : words)
        wordFreq[w]++;

    for(auto p : wordFreq)
        cout << p.first << " -> " << p.second << endl;


    cout << "\n===== CHECK KEY EXISTENCE =====\n";

    if(wordFreq.find("apple") != wordFreq.end())
        cout << "apple exists\n";

    if(wordFreq.count("mango"))
        cout << "mango exists\n";
    else
        cout << "mango does not exist\n";


    cout << "\n===== COUNT FREQUENCY IN ARRAY =====\n";

    vector<int> arr = {1,2,3,2,1,4,2,3,3};

    map<int,int> freq;

    for(int x : arr)
        freq[x]++;

    for(auto p : freq)
        cout << p.first << " appears " << p.second << " times\n";


    cout << "\n===== MAP AS DICTIONARY =====\n";

    map<string,string> dictionary;

    dictionary["hello"] = "a greeting";
    dictionary["map"] = "key value container";

    cout << "Meaning of hello: " << dictionary["hello"] << endl;


    cout << "\n===== SORT BY VALUE (ADVANCED) =====\n";

    vector<pair<string,int>> vec(wordFreq.begin(), wordFreq.end());

    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return a.second > b.second;  // descending by frequency
    });

    for(auto p : vec)
        cout << p.first << " -> " << p.second << endl;


    cout << "\n===== PREFIX SUM FREQUENCY TRICK =====\n";

    // Count subarrays with sum = k
    vector<int> nums = {1,1,1};
    int k = 2;

    map<int,int> prefixCount;
    prefixCount[0] = 1;

    int sum = 0;
    int result = 0;

    for(int x : nums){
        sum += x;

        if(prefixCount.find(sum - k) != prefixCount.end())
            result += prefixCount[sum - k];

        prefixCount[sum]++;
    }

    cout << "Subarrays with sum 2: " << result << endl;

    return 0;
}