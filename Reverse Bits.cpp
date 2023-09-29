#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" "<<x<<"\n";
#define int long long int
#define loopin(v) for(auto &i: v) cin >> i;
#define loopout(v) for(auto &i: v) cout << i << " ";

void print_bin(int bin ,string &sol) {
    for(int i = 31 ; i >=0 ;i--) {
        string a = to_string((bin >>i)&1) ;
        sol+=a;
    }
}

int calc (string bin) {
    int sol = 0, j = 31;
    for(int i =0; i <= 31 ; i++ , j--) {
        if(bin[i] == '1') sol+=(1*(1ll)<<j*1ll);
        // debug(sol)
        // debug(j)
    }
    return sol ;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n ;
    cin >> n ;

    string bin ;
    print_bin(n , bin) ;
    // debug(bin)
    reverse(bin.begin(), bin.end());
    // debug(bin)

    int sol = calc(bin) ;
    cout << sol ;



    return 0;
}
