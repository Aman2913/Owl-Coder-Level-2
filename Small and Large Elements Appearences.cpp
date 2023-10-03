#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    map<char,int>mp;
    for(auto &i:s)
    {
        mp[i]++;
    }
    auto it= mp.begin();
    if(it->first==' ')it++;
    cout<<it->first<<" "<<it->second;
    it=mp.end();
    it--;
    cout<<" "<<it->first<<" "<<it->second<<endl;
}
