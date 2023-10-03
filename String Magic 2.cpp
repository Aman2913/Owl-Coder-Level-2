#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    cin >> input;

    stringstream ss(input);
    int sum = 0;

    while (!ss.eof()) {
        int num;
        ss >> num;

        if (!ss.fail()) {
            sum += num;
        } else {
            ss.clear();
            char c;
            ss >> c;
        }
    }

    cout << sum << endl;

    return 0;
}
