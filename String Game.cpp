#include <iostream>
#include <string>

using namespace std;

string canStringsBeSame(int n, string s) {
    int count[52] = {0}; // Change the size to 52 to handle both lowercase and uppercase

    for (char c : s) {
        if (islower(c)) {
            count[c - 'a']++;
        } else {
            count[c - 'A' + 26]++;
        }
    }

    string a = "", b = "";

    for (int i = 0; i < n; i++) {
        if (islower(s[i]) && count[s[i] - 'a'] % 2 == 0) {
            a += s[i];
        } else if (isupper(s[i]) && count[s[i] - 'A' + 26] % 2 == 0) {
            a += s[i];
        } else {
            b += s[i];
        }

        if (islower(s[i])) {
            count[s[i] - 'a']--;
        } else {
            count[s[i] - 'A' + 26]--;
        }
    }

    if (a == b) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string result = canStringsBeSame(n, s);
        cout << result << endl;
    }

    return 0;
}
