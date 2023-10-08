#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n;
    int c=0;
    while(t>0){
        int r=t%10;
        if(r!= 0 && n%r==0){
            c++;
        }
        t=t/10;

    }
    cout<<c;

}
