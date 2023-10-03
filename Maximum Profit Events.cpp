#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

int maximumProfitEvents(vector<vector<int>>& events) {
    sort(events.begin(), events.end(), compare);
    int n = events.size();
    vector<int> dp(n, 0);
    dp[0] = events[0][2];

    for (int i = 1; i < n; i++) {
        int curr_profit = events[i][2];
        int prev_non_overlapping = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (events[j][1] <= events[i][0]) {
                prev_non_overlapping = j;
                break;
            }
        }
        if (prev_non_overlapping != -1) {
            curr_profit += dp[prev_non_overlapping];
        }
        dp[i] = max(dp[i - 1], curr_profit);
    }

    return dp[n - 1];
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> events(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        cin >> events[i][0] >> events[i][1] >> events[i][2];
    }

    int result = maximumProfitEvents(events);
    cout << result << endl;

    return 0;
}
