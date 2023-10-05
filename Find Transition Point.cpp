#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=0,flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            flag =0 ;
            c=i;
            break;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else{
        cout<<c<<endl;
    }

}
