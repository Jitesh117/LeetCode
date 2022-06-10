class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>hash;
        int left = 0,right = 0;
        int result  = INT_MIN;
        int n = s.size();
        if(n<=1)
            return n;
        while(right<n)
        {
            hash[s[right]]++;
            while(hash[s[right]]>1)
            {
                hash[s[left]]--;
                left++;
            }
            result=max(result,right-left+1);
            right++;
        }
        return result;
    }
};