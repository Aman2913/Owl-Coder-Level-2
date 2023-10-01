#include<bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& cost) {
        int n= cost.size();
        int i = n-1, ans = 0;
        
        if(n <= 2){
            for(auto x: cost) 
                ans += x;
            return ans;
        }
        
        sort(cost.begin(), cost.end());
        
        while(i>=1){
            ans = ans +  cost[i] + cost[i-1];
            if(i-1 == 0 || i-1 == 1) return ans;
            i = i-3;
        }
        ans += cost[0];
        
        return ans;
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
    cout<< minimumCost(v)<<endl;
}
