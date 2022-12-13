class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = INT_MIN;
        int minp = INT_MAX;
        for(int i = 0;i<prices.size();i++){
            minp = min(minp,prices[i]);
            int temp = prices[i] - minp;
            result = max(result,temp);
        }
        return result;
    }
};