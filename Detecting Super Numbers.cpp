#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
vector<int> prime_factors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}
bool is_super_number(int n) {
    vector<int> factors = prime_factors(n);
    int factor_sum = 0;
    for (char digit : to_string(n)) {
        factor_sum += digit - '0';
    }
    int prime_sum = 0;
    for (int factor : factors) {
        if (is_prime(factor)) {
            for (char digit : to_string(factor)) {
                prime_sum += digit - '0';
            }
        }
    }
    return factor_sum == prime_sum;
}

int main() {
    int N;
    cin >> N;
    bool result = is_super_number(N);
    if (result) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
