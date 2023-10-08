#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) {cin >> i;}
#define loopout(v) for(auto &i: v) {cout << i  << " " ;}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , r ;
    cin >> n ;

    vector<int > v(n) ;

    loopin(v) 

    cin >> r ;

    if(r == 0) loopout(v) 
    else {
        reverse(v.begin()+1, v.end()) ;
        reverse(v.begin()+1,v.begin() + r + 1) ;
        reverse(v.begin() + r + 1, v.end()) ;
        loopout(v)
    }



    return 0;
}
