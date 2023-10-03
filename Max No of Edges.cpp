#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,l;
        cin>>n>>k>>l;
        n-=k+l;
        if(n<0){
            n=abs(n);
            k-=n;
            l-=n;
            n=0;
        }
        ll e=k*(n+l)+n*l+(n*(n-1))/2;
        cout<<e<<endl;
    }
}
