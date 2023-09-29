#include <bits/stdc++.h>
using namespace std;

int minTowers(vector<int> &arr, int n) {
    vector<int> towers;
    for (int i = 0; i < n; ++i) {
        bool placed = false;
        for (int j = 0; j < towers.size(); ++j) {
            if (arr[i] < towers[j]) {
                towers[j] = arr[i];
                placed = true;
                break;
            }
        }
        if (!placed) {
            towers.push_back(arr[i]);
        }
    }
    return towers.size();
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<minTowers(v,n)<<endl;
}
