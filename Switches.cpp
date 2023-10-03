#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i*i<=n;i++)
    {
        c++;
    }
    cout<<c<<endl;    
}
