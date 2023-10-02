#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) cin >> i;
#define loopout(v) for(auto &i: v) cout << i << " ";

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s1, s2 ;
    getline(cin , s1);
    // cin.ignore(); 
    getline(cin , s2);

    // debug(s1)debug(s2)
    int p =0;
    string str; 
    for(int i =0 ; i < s1.size() ; i++ ) {
        if(s1[i] == ' ') {
            int n = s2.find(str);
            // debug(n)
            // debug(str) 
            if(n > s2.size()) cout << str << " ";
            str=""; 
        }
        else str.push_back(s1[i]);
    }
    int n =s2.find(str);
    if(n > s2.size()) cout << str << " ";
    str=""; 
    for(int i =0 ; i < s2.size() ; i++ ) {
        if(s2[i] == ' ') {
            int n = s1.find(str);
            // debug(n)
            // debug(str) 
            if(n > s1.size()) cout << str << " ";
            str=""; 
        }
        else str.push_back(s2[i]);
    }
    n =s1.find(str);
    if(n > s1.size()) cout << str << " ";


    return 0;
}
