class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0,temp=0;
        unordered_map<int,int> rec;
       for(int left = 0,right = 0;right<nums.size();right++)
       {
            rec[nums[right]]++;
            temp+=nums[right];
            while(rec[nums[right]]>1 and left<=right)
            {
                temp-=nums[left];
                rec[nums[left++]]--;
            }
         
           sum=max(sum,temp);
       }
        return sum;
    }
};