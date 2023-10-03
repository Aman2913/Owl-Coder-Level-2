#include<bits/stdc++.h> 

using namespace std; 

bool check_repeated(int n) { 

    map<int, int> mp; 
    while (n > 0) { 

        int digit = n % 10; 

        mp[digit]++; 

        n = n / 10; 
    } 
    for (auto it : mp) { 

        if (it.second > 1) { 

            return false; 
        } 
    } 
    return true; 
} 
int main() { 

    int a, b; 

    cin >> a >> b; 

    int c = 0; 

     

    for (int i = a; i <= b; i++) { 

        if (check_repeated(i)) { 

            c++; 
        } 
    } 
    cout << c; 
    return 0; 

} 
