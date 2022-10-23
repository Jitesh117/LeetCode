class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(2);
        int count =0;
        unordered_map<int,int>hash;
        for(auto i:nums)
            hash[i]++;
        for(int i = 1;i<=n and count<2;i++)
          { 
           if(hash[i]==2)
               result[0] = i,count++;
           if(hash[i] == 0)
               result[1] = i,count++;
        }
        return result;
        
    }
};