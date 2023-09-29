#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    vector<int>v;
   for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
     for(int i=0;i<m;i++){
        v.push_back(arr1[i]);
    }
    sort(v.begin(),v.end());
    int l=v.size();
    if(l%2){
        cout<<v[l/2.0];
        }
    else  cout<<(v[l/2-1]+v[l/2])/2.0;
}
