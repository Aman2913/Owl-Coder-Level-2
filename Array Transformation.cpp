#include <bits/stdc++.h>
using namespace std;
int x[100010];
int main()
{
int n,k=1;
cin>>n;
for (int i=0;i<n;i++)
{
cin>>x[i];
}
sort(x,x+n);
bool f=(x[0]==1);
for (int i=1;i<n&&f;i++)
{
if (k<x[i] ) f=false;
k+=x[i];
}
if (f) cout<<"YES\n";
else cout<<"NO\n";}
