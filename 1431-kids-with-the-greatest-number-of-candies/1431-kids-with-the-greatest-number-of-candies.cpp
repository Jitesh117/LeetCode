class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        vector<int> temp = candies;
        sort(temp.begin(),temp.end());
        int max = temp[temp.size()-1];
        for(auto it:candies){
            if(it+extraCandies >=max)
                result.push_back(true);
            else
                result.push_back(false);
        }
        return result;
    }
};