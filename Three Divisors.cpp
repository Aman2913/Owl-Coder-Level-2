#include <iostream>
#include <cmath>

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

    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int count_numbers_with_three_divisors(int N) {
    int count = 0;
    for (int i = 2; i <= std::sqrt(N); ++i) {
        if (is_prime(i)) {
            long long squared = static_cast<long long>(i) * i;
            if (squared <= N) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    int result = count_numbers_with_three_divisors(N);
    std::cout << result << std::endl;

    return 0;
}
