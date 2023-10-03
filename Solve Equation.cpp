#include <iostream>
using namespace std;

bool canCreateNumber(int N) {
    for (int x = 0; x <= N / 2; x++) {
        for (int y = 0; y <= N / 7; y++) {
            if (2 * x + 7 * y == N) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    
    if (canCreateNumber(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
