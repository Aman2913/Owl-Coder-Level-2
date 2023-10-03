#include <iostream>
#include <vector>

using namespace std;

bool isValidSplit(vector<int>& arr, int k, int maxSum) {
    int count = 1;
    int currSum = 0;
    
    for (int num : arr) {
        currSum += num;
        if (currSum > maxSum) {
            count++;
            currSum = num;
        }
    }
    
    return count <= k;
}

int splitArrayLargestSum(vector<int>& arr, int k) {
    int left = 0;
    int right = 0;
    
    for (int num : arr) {
        left = max(left, num);
        right += num;
    }
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isValidSplit(arr, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minMaxSum = splitArrayLargestSum(arr, k);
    cout << minMaxSum << endl;
    
    return 0;
}
