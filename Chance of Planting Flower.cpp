#include<bits/stdc++.h> 

using namespace std; 

bool can_we_place(vector<int>&v,int n) 

{ 

    if (n == 0) { 

        return true; 

    } 

    for (int i = 0; i < v.size(); i++) { 

        if (v[i] == 0 && (i == 0 || v[i-1] == 0) && (i == v.size()-1 || v[i+1] == 0)) { 

            v[i] = 1; 

            n--; 

            if (n == 0) { 

                return true; 

            } 

        } 

    } 

    return false; 

} 

  

int main() 

{ 

    string s; 

    getline(cin,s); 

    vector<int>v; 

    for(auto i :s) 

    { 

        if(i=='0'||i=='1') 

        { 

            v.push_back(i-'0'); 

        } 

    } 

    int n; cin>>n; 

    if(can_we_place(v,n)) cout<<"true"; 

    else cout<<"false"; 

}
