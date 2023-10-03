#include <iostream>
#include <unordered_map>
using namespace std;

int subarraySum(int nums[], int n, int k) {
    int count = 0;
    int sum = 0;
    unordered_map<int, int> freq;
    freq[0] = 1;
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (freq.find(sum - k) != freq.end()) {
            count += freq[sum - k];
        }
        freq[sum]++;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int k;
    cin >> k;
    
    int count = subarraySum(nums, n, k);
    cout << count << endl;
    
    return 0;
}
