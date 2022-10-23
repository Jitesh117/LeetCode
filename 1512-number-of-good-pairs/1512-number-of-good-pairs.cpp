class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>count;
        int result = 0;
        for(int i :nums)
        {
           result+=count[i]++; 
        }
        return result;
    }
};