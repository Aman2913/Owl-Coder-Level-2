#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int arr1[n];
    int arr2[m];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }

    for(auto &i: s)
    {
        cout<<i<<" ";
    }



}
