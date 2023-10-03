#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    int n; 

    cin>>n; 

    int c=0; 

    for(int a=1;a<=n;a++){ 

        int b=n/a; 

        if(a*b==n && a<b){ 

            c++; 

        } 

    } 

    cout<<c; 

}
