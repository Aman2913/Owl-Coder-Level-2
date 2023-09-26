#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            reverse(s.begin()+p,s.begin()+i);
            p=i+1;
        }
    }
    reverse(s.begin()+p,s.end());
    cout<<s<<endl;
}
