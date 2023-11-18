class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int maxFrequency = 0; 
        long currentSum = 0; 

        sort(nums.begin(), nums.end()); 

        for (int left = 0, right = 0; right < nums.size(); ++right) {
            currentSum += nums[right]; 

            while (currentSum + k < static_cast<long>(nums[right]) * (right - left + 1)) {
                currentSum -= nums[left]; 
                left++;
            }

            maxFrequency = max(maxFrequency, right - left + 1);
        }

        return maxFrequency;
    }
};;