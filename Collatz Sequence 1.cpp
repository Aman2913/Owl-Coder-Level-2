#include <iostream>
using namespace std;

void collatz_sequence(int n) {
    cout << n << " ";
    
    while (n != 1) {
        if (n % 2 == 0) { 
            n = n / 2;
        } else {  
            n = 3 * n + 1;
        }
        
        cout << n << " ";
    }
}

int main() {
    int n;
    cin >> n;
    
    collatz_sequence(n);
    
    return 0;
}
