#include <iostream>
#include <string>
#include <set>

using namespace std;

int count_vowel_substrings(string input_string) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;

    for (int i = 0; i < input_string.length(); ++i) {
        set<char> seen_vowels;
        for (int j = i; j < input_string.length(); ++j) {
            seen_vowels.insert(input_string[j]);
            if (seen_vowels == vowels) {
                count += 1;
            }
        }
    }

    return count;
}

int main() {
    string input_str;
    cin >> input_str;
    cout << count_vowel_substrings(input_str) << endl;
    return 0;
}
