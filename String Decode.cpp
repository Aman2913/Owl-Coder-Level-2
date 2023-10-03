#include<bits/stdc++.h> 

using namespace std; 

int main(){ 

    string str; 

    cin>>str; 

    set<char>s; 

    for(int i=0;i<str.size();i++){ 

        s.insert(str[i]); 

    } 

    if(str.size()>=(2*s.size())){ 

        cout<<"Yes"<<endl;; 

    }else{ 

        cout<<"No"<<endl; 

    } 

} 
