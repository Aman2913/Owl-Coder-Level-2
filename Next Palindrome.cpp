#include<bits/stdc++.h>
using namespace std;

int ispalindrome(int num)
{
    int n,k,rev=0;
    n=num;
    while(num!=0)
    {
        k=num%10;
        rev=rev*10+k;
        num/=10;
    }
    if(n==rev)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num;
    cin>>num;
    num+=1;
    while(!ispalindrome(num))
    {
        num=num+1;
    }
    cout<<num<<endl;

}
