#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    int n; 

    cin>>n; 

    string arr[n]; 

    for(int i=0;i<n;i++){ 

        cin>>arr[i]; 

    } 

    int k; 

    cin>>k; 

    string target; 

    cin>>target; 

    string s=target.substr(0,k); 

    int c=0; 

    for(int i=0;i<n;i++){ 

        string p=arr[i].substr(0,k); 

        if(p==s){ 

            c++; 

        } 

    } 

    cout<<c; 

} 
