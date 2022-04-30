class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        return profit(prices,fee);
    }
    int profit(vector<int>& prices,int fee) {
        int n = prices.size();
        vector<vector<int>>t(n,vector<int>(2,-1));
       return solve(prices,1,0,prices.size(),t,fee);
    }
    int solve(vector<int> &prices,int buy, int ind, int n,vector<vector<int>>& t,int fee)
    {
        int profit = 0;
        if(ind == n)
            return 0;
        if(t[ind][buy]!=-1)
            return t[ind][buy];
        if(buy)
        {
            profit = max(-prices[ind] + solve(prices,0,ind+1,n,t,fee),solve(prices,1,ind+1,n,t,fee));
        }
        else
        {
            profit = max(prices[ind]-fee + solve(prices,1,ind+1,n,t,fee),solve(prices,0,ind+1,n,t,fee));
        }
        return t[ind][buy]=profit;
    }
};