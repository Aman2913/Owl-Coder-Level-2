#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    vector<int> digits;
    
    for (int i = 9; i >= 1; i--) {
        if (s >= i) {
            digits.push_back(i);
            s -= i;
        }
    }
    
    if (s > 0) {
        cout << -1 << endl;
    } else {
        sort(digits.begin(), digits.end());
        
        for (int i = 0; i < digits.size(); i++) {
            cout << digits[i];
        }
        cout << endl;
    }
    
    return 0;
}
