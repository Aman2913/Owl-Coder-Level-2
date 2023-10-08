#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) {cin >> i;}
#define loopout(v) for(auto &i: v) {cout << i  << " " ;}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n , k ;
    cin >> n >> k ;

    vector<int > v(n) ,m(n) ;

    loopin(v)
    loopin(m)

    int mi = INT_MAX ;

    for(int i =0 ; i < n ; i++) {
        int t = m[i] * abs(v[i] -k ) ;
        mi= min(mi , t) ;
    }

    cout << mi ;

    return 0;
}

