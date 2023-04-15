class Solution {
public:
    //vector<vector<int>>dp(2001,vector<int>(2001,0));
    int dp[2001][2001] = {0};
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        return solve(0, piles, k);
    }
    int solve(int index, vector<vector<int>> & piles, int k) {
        if (index >= piles.size()) return 0;
        if (dp[index][k] != 0) return dp[index][k];
        int maxi = 0, sum = 0;
        //either dont take from that pile
        maxi = max(maxi, solve(index + 1, piles, k));
        for (int i = 0; i < piles[index].size(); i++) {
            sum += piles[index][i];
            //or take some certain prefix from that pile, if we can take that much elements.
            if (k - (i + 1) >= 0) maxi = max(maxi, sum + solve(index + 1, piles, k - (i + 1)));
        }
        return dp[index][k] = maxi;
    }
};