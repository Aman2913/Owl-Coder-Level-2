#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    int n; 

    cin>>n; 

    int arr[n]; 

    for(int i=0;i<n;i++){ 

        cin>>arr[i]; 

    } 

    int ec=0,oc=0; 

    for(int i=0;i<n;i++){ 

        if(arr[i]%2==0){ 

            ec++; 

        }else{ 

            oc++; 

        } 

    } 

    if(oc%2==0){ 

        cout<<"1"; 

    }else{ 

        cout<<"0"; 

    } 

} 
