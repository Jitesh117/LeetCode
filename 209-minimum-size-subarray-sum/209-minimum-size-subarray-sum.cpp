class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int result=INT_MAX;
        int temp=0;
        for(int left = 0,right=0;right<v.size();right++)
        {
            temp+=v[right];
            while(temp>=target and left<=right)
            {
                temp-=v[left];
                result=min(result,right-left+1);
                left++;
            }
        }
        if(result == INT_MAX)
            return 0;
        return result;
    }
};