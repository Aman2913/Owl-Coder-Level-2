#include <iostream> 
#include <unordered_set> 
using namespace std; 
int fun(string s1, string s2) { 
    if (s1.length() != s2.length()) { 
        return 0; 
    } 
    unordered_set<char> set1(s1.begin(), s1.end()); 
    unordered_set<char> set2(s2.begin(), s2.end()); 
    if (set1 == set2) { 
        return 1; 
    } 
    return 0;
} 
int main() { 
    string s1, s2; 
    cin >> s1; 
    cin >> s2; 
    cout << fun(s1, s2) << endl; 
    return 0; 
} 
