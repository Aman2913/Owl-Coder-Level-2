#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    int n; 

    cin>>n; 

    int arr[n]; 

    for(int i=0;i<n;i++){ 

        cin>>arr[i]; 

    } 

    int c=0; 

    for(int i=2;i<n;i++){ 

      if(arr[i]!=arr[i-1]+arr[i-2]){ 

        c++; 
        arr[i]=arr[i-1]+arr[i-2]; 
      } 
    } 
    cout<<c; 
} 
