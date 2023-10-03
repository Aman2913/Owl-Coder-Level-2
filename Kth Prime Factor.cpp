#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int kth_prime_factor(int n, int k) {
    std::vector<int> prime_factors;

    if (n <= 1 || k <= 0) {
        return -1;
    }
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && is_prime(i)) {
            prime_factors.push_back(i);
            n /= i;
            if (prime_factors.size() == k) {
                return prime_factors.back();
            }
        }
    }

    if (prime_factors.size() < k) {
        return -1;
    }
    return -1;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    int result = kth_prime_factor(n, k);
    std::cout << result << std::endl;

    return 0;
}
