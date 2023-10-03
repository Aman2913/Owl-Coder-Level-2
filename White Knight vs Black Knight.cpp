#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	cin>>n>>m;
	ll total=n*m;
	ll ans=total*(total-1);
	if(n>=2 and m>=1)
	{
		ans-=(4*(n-2)*(m-1));
	}
	if(m>=2 and n>=1)
	{
		ans-=(4*(m-2)*(n-1));
	}
	cout<<ans<<endl;
}

46.
