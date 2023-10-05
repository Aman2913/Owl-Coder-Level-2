#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n)
    {
        int temp =n%10;
        if(temp>ans)
        {
            ans=temp;
        }
        n/=10;
    }
    cout<<ans<<endl;
}
