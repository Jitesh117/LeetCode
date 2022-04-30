class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int ans=INT_MIN;
        for(int i = 0;i<prices.size();i++)
        {
            minp=min(minp,prices[i]);
            int temp = prices[i]-minp;
            ans = max(temp,ans);
        }
        return ans;
    }
};