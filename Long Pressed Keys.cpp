#include<bits/stdc++.h> 
using namespace std; 

int main(){ 

    string s1,s2; 

    cin>>s1>>s2; 

    int i=0,j=0; 

    while(j<s2.size()){ 

        if(i<s1.size() && s1[i]==s2[j]){ 

            i++; 

            j++; 

        } 

        else if(j==0 || s2[j]!=s2[j-1]){ 

            cout<<"false"; 

              return 0; 

        }else{ 

            j++; 

        } 

    } 

    if(i==s1.size()){ 

        cout<<"true"; 

    }else{ 

        cout<<"false"; 

    } 

}
