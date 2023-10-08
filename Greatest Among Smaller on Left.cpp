#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) cin >> i;
#define loopout(v) for(int i =0; i < v.size() ; i++) {cout << sol[i] ; if(i != v.size()-1) cout << " " ;}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n ;
    cin >> n ;

    vector<int > v(n) ;

    for(auto &i: v) cin >> i ;

    for(int i =0 ; i < n ; i++) {
        int mx = -1 ;
        for(int j = i-1 ; j >= 0 ; j--) {
            if(v[i] > v[j]) mx = max(mx , v[j]) ; 
        }
        cout << mx << " " ;
    }


    return 0;
}
