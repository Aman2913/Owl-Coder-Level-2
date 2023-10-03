#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& stalls, int k, int distance) {
    int cows = 1;
    int prevPos = stalls[0];
    
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - prevPos >= distance) {
            cows++;
            prevPos = stalls[i];
        }
    }
    
    return cows >= k;
}

int solve(int n, int k, vector<int>& stalls) {
    sort(stalls.begin(), stalls.end());
    
    int left = 1;
    int right = stalls[n - 1] - stalls[0];
    int largestMinDistance = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (isPossible(stalls, k, mid)) {
            largestMinDistance = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return largestMinDistance;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> stalls(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    
    int largestMinDistance = solve(n, k, stalls);
    cout << largestMinDistance << endl;
    
    return 0;
}
