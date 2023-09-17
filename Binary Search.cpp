#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int flag=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            cout<<i<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag!=1)
    {
        cout<<-1<<endl;
    }
}
