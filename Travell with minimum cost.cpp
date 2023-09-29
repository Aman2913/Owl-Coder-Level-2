#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
    {
        cout<<n*a<<endl;
    }
    else{
        int full_ticket=(n/m)*b;
        int remaining_ticket =(n%m)*a;
        int min_cost = full_ticket + min(remaining_ticket,b);
        cout<<min_cost<<endl;
    }
}
