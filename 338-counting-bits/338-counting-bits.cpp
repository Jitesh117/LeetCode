class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i =1;i<=n;i++)
        {   int count = 0;
            int temp = i;
            while(temp>0)
            {
                count++;
                temp = temp&(temp-1);
            }
         ans.push_back(count);
        }
        
        return ans;
    }
};