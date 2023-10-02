#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}
