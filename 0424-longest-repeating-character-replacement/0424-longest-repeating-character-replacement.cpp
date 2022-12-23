class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i = 0, j = 0, maxi = 0;
        unordered_map<char,int>umap;
        int result = -1;
        while(j < n)
        {
            umap[s[j]]++;
            maxi = max(maxi, umap[s[j]]);
            if((j-i+1) - maxi > k){
                umap[s[i]]--;
                i++;
            }
            result = max(result, (j-i+1));
            j++;   
        }
        return result;
    }
};