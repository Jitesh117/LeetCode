class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        
        string result;
        int i = 0, j = 0;
        while(i < n and j < m){
            result += word1[i++];
            result += word2[j++];
        }
        while(i < n){
            result += word1[i++];
        }
        while(j < m){
            result += word2[j++];
        }
        return result;
    }
};