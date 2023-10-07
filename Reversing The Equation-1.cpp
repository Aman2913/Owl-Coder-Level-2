#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,res;
    int j=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+' or s[i]=='*' or s[i]=='-' or s[i]=='/')
        {
            res.insert(res.begin(),s.begin()+j,s.begin()+i);
            j=i+1;
            res.insert(res.begin(),s[i]);
        }
    }
    res.insert(res.begin(),s.begin()+j,s.end());
    cout<<res<<endl;
}
