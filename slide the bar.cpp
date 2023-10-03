#include <bits/stdc++.h>
using namespace std;

bool Duplicate(vector<int>& nums, int k) {
    unordered_map<int, int> numIndices;
    
    for (int i = 0; i < nums.size(); i++) {
        if (numIndices.find(nums[i]) != numIndices.end() && abs(i - numIndices[nums[i]]) <= k) {
            return true;
        }
        
        numIndices[nums[i]] = i;
    }
    
    return false;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    int k;
    cin >> k;
    
    if (Duplicate(nums, k)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
