class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>t(n,vector<int>(2,-1));
       return solve(prices,1,0,prices.size(),t);
    }
    int solve(vector<int> &prices,int buy, int ind, int n,vector<vector<int>>& t)
    {
        int profit = 0;
        if(ind == n)
            return 0;
        if(t[ind][buy]!=-1)
            return t[ind][buy];
        if(buy)
        {
            profit = max(-prices[ind] + solve(prices,0,ind+1,n,t),solve(prices,1,ind+1,n,t));
        }
        else
        {
            profit = max(prices[ind] + solve(prices,1,ind+1,n,t),solve(prices,0,ind+1,n,t));
        }
        return t[ind][buy]=profit;
    }
}; 
