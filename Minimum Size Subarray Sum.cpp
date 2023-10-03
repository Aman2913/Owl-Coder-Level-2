#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    int n; 

    cin>>n; 

    int arr[n]; 

    for(int i=0;i<n;i++){ 

        cin>>arr[i]; 

    } 

    int k; 

    cin>>k; 

    int mini=INT_MAX; 

    int c=0; 

    for(int i=0;i<n;i++){ 

        int sum=0; 

        for(int j=i;j<n;j++){ 

            sum+=arr[j]; 

            if(sum>=k){ 

                mini=min(mini,(j-i+1)); 

                c=1; 

            } 

        } 

    } 

    if(c==1){  

        cout<<mini; 

    } 

        else{ 

            cout<<0; 

        } 

}
