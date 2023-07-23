class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> map;
        int maxval = 0;
        for(auto it:nums){
            map[it]++;
            maxval = max(maxval, it);
        }
        for(int i = 1; i<= maxval; i++){
            if(i != maxval and map[i] != 1) return false;
            if(i == maxval and map[i] != 2) return false;
        }
        return true;
    }
};