#include <iostream>
#include <string>

using namespace std;

string divide_string(const string& S, int P) {
    if (S.length() % P != 0) {
        return "Invalid String";
    }

    int part_length = S.length() / P;
    string divided_string;

    for (int i = 0; i < S.length(); i += part_length) {
        divided_string += S.substr(i, part_length) + " ";
    }

    return divided_string;
}

int main() {
    string S;
    cin >> S;

    int P;
    cin >> P;

    string result = divide_string(S, P);
    cout << result << endl;

    return 0;
}
