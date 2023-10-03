#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
        cin>>arr[i]; 
    } 
    sort(arr,arr+n); 
    int ans=0; 
    for(int i=1;i<n;i++){ 
        while(arr[i-1]>=arr[i]){ 
            ans++; 
            arr[i]+=1; 
        } 
    } 
    cout<<ans<<endl; 
} 
