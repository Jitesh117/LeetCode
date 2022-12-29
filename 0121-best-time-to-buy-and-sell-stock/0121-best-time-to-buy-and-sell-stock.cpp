class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int minp = 1e9;
        for(int i = 0;i<prices.size();i++){
           minp = min(minp,prices[i]);
           result = max(result, prices[i] - minp);
        }
        return result;
        
    }
};