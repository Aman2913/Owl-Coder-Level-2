#include<bits/stdc++.h>

using namespace std;

bool check(char ch)
{
    if(ch>='A' and ch<='Z')return true;
    return false;
}

int main()
{
    string s;
    getline(cin,s);
    int c=1;
    for(int i=1;i<s.size();i++){
        if(check(s[i]))c++;
    }
    cout<<c;
}
