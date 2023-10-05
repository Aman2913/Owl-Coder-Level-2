#include <bits/stdc++.h>
using namespace std;

const int M = 20;

int dp[M][M][2][2];

int count(int pos, int cnt, int tight, int nonz, vector<int> num, int d, int K)
{
    if (pos == num.size()) {
        if (cnt == K)
            return 1;
        return 0;
    }

    if (dp[pos][cnt][tight][nonz] != -1)
        return dp[pos][cnt][tight][nonz];

    int ans = 0;
    int limit = (tight ? 9 : num[pos]);

    for (int dig = 0; dig <= limit; dig++) {
        int currCnt = cnt;

        if (dig == d) {
            if (d != 0 || (!d && nonz))
                currCnt++;
        }

        int currTight = tight;

        if (dig < num[pos])
            currTight = 1;

        ans += count(pos + 1, currCnt, currTight, nonz || (dig != 0), num, d, K);
    }
    return dp[pos][cnt][tight][nonz] = ans;
}

int solve(int x, int d, int K)
{
    vector<int> num;
    while (x) {
        num.push_back(x % 10);
        x /= 10;
    }
    reverse(num.begin(), num.end());

    memset(dp, -1, sizeof(dp));
    return count(0, 0, 0, 0, num, d, K);
}

int main()
{
    int L, R, d, K;
    cin >> L;
    cin >> R;
    cin >> d;
    cin >> K;
    
    cout << solve(R, d, K) - solve(L - 1, d, K) << endl;

    return 0;
}
