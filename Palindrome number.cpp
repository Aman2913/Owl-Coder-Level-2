#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rev=0;
    cin>>n;
    int k=n;
    while(n)
    {
        int temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    if(rev==k)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
