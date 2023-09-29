#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0;
    int mx=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            c++;
        }
        else{
            mx=max(mx,c);
            c=0;
        }
    }
    cout<<max(mx,c)<<endl;
}
