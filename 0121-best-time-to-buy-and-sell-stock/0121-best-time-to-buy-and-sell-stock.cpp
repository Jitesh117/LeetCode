class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int minp = 1e9;
        for(auto price:prices){
            minp = min(minp,price);
            result = max(result,price - minp);
        }
        return result;
    }
};