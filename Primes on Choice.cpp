#include<bits/stdc++.h> 
using namespace std; 

bool check(int n){ 
    if(n<=1){ 
        return false; 
    } 

    for(int i=2;i<n;i++){ 

        if(n%i==0){ 

            return false; 
        } 
    } 

    return true; 

} 

int main(){ 

    int n,r,c; 
    cin>>n>>r>>c; 
    int t=0; 
    while(1){ 
      if(c==1){ 
        if(check(++n)){ 
            cout<<n<<" "; 
           t++; 
        } 
      }else{ 
       if(check(--n)){ 

            cout<<n<<" "; 

            t++; 
        } 
      } 

      if(t==r){ 

        break; 
      } 
    } 
} 
