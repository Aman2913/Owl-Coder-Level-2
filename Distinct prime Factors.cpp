#include<bits/stdc++.h>
using namespace std; 

int primes[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71}; 

int main(){ 

    long long  n,m,t=1; 

    cin>>n; 

    while(n--){ 

        cin>>m; 

        t=1ll; 

        int i=0; 

        for(i=0;i<20;i++){ 

            if(t*primes[i]>m)break; 

            t*=primes[i]; 

        } 

        cout<<i<<"\n"; 

    } 

}
