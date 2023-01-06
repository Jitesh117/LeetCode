class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int result = 0;
        for(auto &cost: costs){
            if(cost<=coins){
               result++;
                coins-=cost;
            }
            else
                break;
        }
        return result;
    }
};