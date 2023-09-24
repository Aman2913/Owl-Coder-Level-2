#include<bits/stdc++.h>
using namespace std;

int longestsubarraysumdivisible(int arr[],int n, int k)
{
    int mx=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0;
        for(int j=i;j<n;j++)
        {
            sum1+=arr[j];
            if(sum1%k==0)
            {
                mx=max(mx,j-i+1);
            }
        }
    }
    return mx;
}

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    cout<<longestsubarraysumdivisible(arr,n,k)<<endl;

}
