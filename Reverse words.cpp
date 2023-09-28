#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s ;
    getline(cin , s) ;
    string sub;
    int c=0;
    if(s[0] != ' ') c++;
    for(int i =0 ; i < s.size() ; i++) {
        if(s[i] == ' ' && s[i+1] != ' ') {
            if(c == 0) c++;
            else sub.push_back(' ');
        }
        if(s[i] != ' ') {
            sub.push_back(s[i]);
        }
    }
    c=0;
    reverse(sub.begin(), sub.end());
    for(int i = 0; i < sub.size(); i++ ){
        if(sub[i] == ' ') reverse(sub.begin()+c, sub.begin()+i);
        if(sub[i] == ' ' && sub[i+1] != ' ') c =i+1;
    }
    reverse(sub.begin()+c, sub.end());

    cout << sub ;

}
