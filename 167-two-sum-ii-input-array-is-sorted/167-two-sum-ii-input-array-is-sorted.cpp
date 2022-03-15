class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> ans;
        int first = 0,last = v.size()-1;
        while(first<last)
        {
            if(v[first]+v[last] > target)
                last--;
            else if(v[first]+v[last] < target)
                first++;
            else
               {
                ans.push_back(first+1);
                ans.push_back(last+1);
                return ans;
               }
            
        }
        return ans;
    }
};