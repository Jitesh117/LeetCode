class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxval = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for(auto c: candies){
            if(c + extraCandies >= maxval) result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
};