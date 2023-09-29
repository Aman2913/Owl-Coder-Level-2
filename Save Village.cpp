#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int MOD = 1000000001;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(v[j]>v[i])
           {
                c+=v[j];
                c=c%MOD;
                break;
           }
        }
    }
    cout<<c<<endl;
    return 0;
}
