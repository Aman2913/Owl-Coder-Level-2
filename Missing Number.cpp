#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n-1;i++)
    {
        cin>>arr[i];
    }
     for(int i=1;i<=n-1;i++)
    {
        sum+=arr[i];
    }
    int k =((n*(n+1))/2);
    cout<<k-sum<<endl;
    

}
