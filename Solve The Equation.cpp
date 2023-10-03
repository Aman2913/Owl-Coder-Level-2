#include <bits/stdc++.h>
using namespace std;

long long solveEquation(long long A) {
    long long n = (-1 + sqrt(4*A - 3)) / 2;
    return n;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long A;
        cin >> A;
        
        long long n = solveEquation(A);
        cout << n << endl;
    }
    
    return 0;
}
