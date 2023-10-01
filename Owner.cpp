#include<bits/stdc++.h>

using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int result = 0, max_extra = 0, extra = 0;
        for (int i = 0; i < customers.size(); ++i) {
            result += grumpy[i] ? 0 : customers[i];
            extra += grumpy[i] ? customers[i] : 0;
            if (i >= X) {
                extra -= grumpy[i - X] ? customers[i - X] : 0;
            }
            max_extra = max(max_extra, extra);
        }
        return result + max_extra;
    }


int main() {
    int n, X;
    cin >> n;

    vector<int> customers(n);
    vector<int> grumpy(n);

    for (int i = 0; i < n; ++i) {
        cin >> customers[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> grumpy[i];
    }

    cin >> X;

    int result = maxSatisfied(customers, grumpy, X);
    cout << result << endl;

    return 0;
}
