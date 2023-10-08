#include <bits/stdc++.h> 
using namespace std; 
bool isWellSpaced(string s) { 
  unordered_map<char, int> distance; 
  for (int i = 0; i < s.length(); i++) {
    if (distance.count(s[i]) == 0) {
      distance[s[i]] = i;
    } else {
      if (distance[s[i]] != i - 1) {
        return false;
      }
      distance[s[i]] = i;
    }
  }
  return true;
}
int main() {
  string s; cin>>s;
  if(!isWellSpaced(s))cout << "true";
  else cout <<"false";
 return 0;
}
