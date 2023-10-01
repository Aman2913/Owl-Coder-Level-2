#include<bits/stdc++.h>
using namespace std;

bool canProvideChange(vector<int>& bills) {
    int five_bills = 0;
    int ten_bills = 0;

    for (int bill : bills) {
        if (bill == 5) {
            five_bills++;
        } else if (bill == 10) {
            if (five_bills > 0) {
                five_bills--;
                ten_bills++;
            } else {
                return false;
            }
        } else if (bill == 20) {
            if (ten_bills > 0 && five_bills > 0) {
                ten_bills--;
                five_bills--;
            } else if (five_bills >= 3) {
                five_bills -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> bills(n);

    for (int i = 0; i < n; i++) {
        cin >> bills[i];
    }

    bool result = canProvideChange(bills);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
