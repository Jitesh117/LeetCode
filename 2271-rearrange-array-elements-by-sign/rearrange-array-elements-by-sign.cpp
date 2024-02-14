class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result, pos, neg;
        for(auto it: nums){
            if( it < 0) neg.push_back(it);
            else
                pos.push_back(it);
        }
        for(int i = 0; i < nums.size() / 2; ++i){
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }
        return result;
    }
};