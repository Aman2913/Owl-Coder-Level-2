#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    unordered_map<int,int>mp;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            c=arr[i];
        }
    }
    cout<<c<<endl;
}
