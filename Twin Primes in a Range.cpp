#include<bits/stdc++.h>
using namespace std;
void prime(vector<int > &v ,int n , int o) {
    for(int i =n ; i < o; i++ ) {
        bool b =1 ;
        for(int j = 2 ; j <= sqrt(i) ; j++ ) {
            if(i%j == 0) b =0;
        }
        if(b) v.push_back(i);
    }
}
int main()
{
     int n , o ;
    cin >> n >> o ;

    vector<int > v;

    prime(v, n , o) ;
    int m =v.size();
    for(int i =0 ; i < m-1 ; i++) { 
        if(abs(v[i] -v[i+1]) == 2) cout << v[i] << " " << v[i+1] << "\n";
    }

    return 0;
}
