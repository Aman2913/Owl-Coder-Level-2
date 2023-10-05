#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) {cin >> i;}
#define loopout(v) for(auto &i: v) {cout << i  << " " ;}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n ;
    cin >> n ;

    vector<int > v(n) ;

    loopin(v) 

    unordered_map<int, int > mp ;
    int mx = INT_MIN , s_n = -1 ;
    for(auto &i: v) {
        mp[i]++ ;
    }

    for(auto &i: v) {
        if(mp[i] > mx) {
            mx = mp[i] ;
            s_n = i ;
        }
    }
    int cnt = 0 ;
    for(auto &i: mp) {
        if(i.second == mx && cnt == 1 ) {
            s_n = -1 ;
            break ;
        }else if(i.second == mx && cnt == 0) {
            cnt++ ;
        }
    }

    if(s_n != -1) cout << "Yes\n" <<  s_n ;
    else cout << "No" ;

    return 0;
}
