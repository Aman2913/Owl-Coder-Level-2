#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        int temp=n;
        while(temp>0)
        {
            int k=temp%10;
            if(k==4 or k==7) c++;
            temp/=10;
        }
        if(c==4 or c==7)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
