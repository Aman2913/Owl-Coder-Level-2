#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

pair<int, int> find_lcm_gcd(int A, int B) {
    int lcm = (A * B) / gcd(A, B);
    int gcd_value = gcd(A, B);
    return make_pair(lcm, gcd_value);
}

int main() {
    int A, B;
    cin >> A >> B;
    pair<int, int> result = find_lcm_gcd(A, B);
    cout << result.first << " " << result.second << endl;
    return 0;
}
