class Solution {
public:
    int dp[100001][3][2];
    int solve(vector<int>& prices, int pos, int k, bool hold){
        if(pos>=prices.size()) return 0;
        if(dp[pos][k][hold]!=-1) return dp[pos][k][hold];
        int buy=0,notbuy=0,sell=0,notsell=0;
	
        if(!hold and k) buy = solve(prices,pos+1,k-1,!hold) - prices[pos];
 
        notbuy = solve(prices,pos+1,k,hold);

        if(hold) sell = solve(prices,pos+1,k,!hold) + prices[pos];

        notsell = solve(prices,pos+1,k,hold);
        return dp[pos][k][hold] = max(max(buy,notbuy),max(sell,notsell));
    }
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,2,false);
    }
};