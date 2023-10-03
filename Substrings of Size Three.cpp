#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>

int count_good_substrings(const std::string &s) {
    int count = 0;
    for (int i = 0; i < s.length() - 2; ++i) {
        std::set<char> unique_chars;
        for (int j = i; j < i + 3; ++j) {
            unique_chars.insert(s[j]);
        }
        if (unique_chars.size() == 3) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string s;
    std::cin >> s;

    int result = count_good_substrings(s);
    std::cout << result << std::endl;

    return 0;
}
