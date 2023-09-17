#include<bits/stdc++.h>
using namespace std;

bool check (char c)
{
    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') return true;
    if(c=='A' or c=='E' or c=='I' or c=='O' or c=='U') return true;
    return false;

}
bool digi(char a)
{
    if(a=='1' or a=='2' or a=='3' or a=='4' or a=='5' or a=='6' or a=='7' or a=='8' or a=='9' or a=='0')return true;
    return false;
}

int main()
{
    string s;
    getline(cin,s);
    int c=0,c1=0,c2=0,c3=0;
    for(int i=0;i<s.length();i++)
    {
        if(check(s[i]))
        {
            c++;
        }
        else if(!digi(s[i]) and s[i]!=' ')
        {
            c1++;
        }
        else if(digi(s[i]))
        {
            c2++;
        }
        else if(s[i]==' ')
        {
            c3++;
        }
    }
    cout<<"Vowels: "<<c<<endl;
    cout<<"Consonants: "<<c1<<endl;
    cout<<"Digits: "<<c2<<endl;
    cout<<"White spaces: "<<c3<<endl;
}
