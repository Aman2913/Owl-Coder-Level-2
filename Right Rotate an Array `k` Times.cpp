#include <iostream>
using namespace std;

void rightRotateArray(int arr[], int n, int k) {
    k = k % n;  // To handle k values greater than n
    for (int i = 0; i < k; i++) {
        int temp = arr[n-1];
        for (int j = n-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rightRotateArray(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
