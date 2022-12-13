class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>umap;
        for(char c:s) umap[c]++;
        int result = 0;
        bool flag = false;
        for(auto it:umap){
            if(it.second %2 == 0)
                result+=it.second;
            else
            {
                flag = true;
                result+=(it.second -1);
            }
        }
        if(flag) result++;
        return result;
    }
};