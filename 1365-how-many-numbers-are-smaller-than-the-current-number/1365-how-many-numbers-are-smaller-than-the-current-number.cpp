class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> temp = nums;
        int n = nums.size();
        sort(temp.begin(), temp.end());
        for(int i=n-1; i>=0; i--) {
            m[temp[i]] = i;
        }
        for(int i=0; i<n; i++) {
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};