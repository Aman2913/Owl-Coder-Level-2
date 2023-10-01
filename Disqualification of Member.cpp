#include<bits/stdc++.h>
using namespace std;

int lastRemaining(int n) {
        return n == 1 ? 1 : 2 * (1 + n / 2 - lastRemaining(n / 2)); 
}

int main()
{
    int n;
    cin>>n;
    cout<<lastRemaining(n)<<endl;
}
