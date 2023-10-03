#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
void work(){
	int n, k;
	map<int, int> m;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		m[arr[i]]++;
 	}
 	vector<int> counted_arr;
 	for(auto x : m){
 	    if(x.second >= k){
            counted_arr.push_back(x.first);
 	    }
 	}
 	if(counted_arr.size() == 0){cout << -1 << endl;return;}
	sort(counted_arr.begin(), counted_arr.end());
	int l = counted_arr[0], longest = 0;
	int ans_l = counted_arr[0], ans_r = counted_arr[0];
	for(int i = 1; i < counted_arr.size(); i++){
	    if(counted_arr[i - 1] + 1 == counted_arr[i]){
	        if(longest >= counted_arr[i] - l)continue;
	        longest = counted_arr[i] - l;
		    ans_r = counted_arr[i];
		    ans_l = l;
	    }else l = counted_arr[i];
	}
    cout << ans_l << " " << ans_r << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
    	work();    
    }
	return 0;
}
