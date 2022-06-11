class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        int sum = 0;
        for(int i = 0;i<v.size();i++)
                sum+=v[i];
        int result=INT_MIN,temp=0;
        for(int left = 0,right = 0;right<v.size();right++)
        {
            temp+=v[right];
            while(left<=right and temp>sum-x)
            {
                temp-=v[left];
                left++;
            }
            if(temp == sum-x )
                result = max(result,right-left+1);
            
        }
        if(result<0)
            return -1;
        return v.size()-result;
    }
};