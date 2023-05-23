// OJ: https://leetcode.com/contest/weekly-contest-264/problems/number-of-valid-words-in-a-sentence/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    int countValidWords(string s) {
        string w;
        istringstream ss(s);
        int ans = 0;
        while (ss >> w) ans += valid(w);
        return ans;
    }
    bool valid(string &s) {
        int hyphen = 0, N = s.size();
        
        for (int i = 0; i < N; ++i) {
            if (isdigit(s[i])) return false; 
            if (isalpha(s[i])) continue; 
            if (s[i] == '-') {
                if (++hyphen > 1) return false; 
                if (i - 1 < 0 or !isalpha(s[i - 1]) or i + 1 >= N or !isalpha(s[i + 1])) return false; 
            } 
            else if (i != N - 1) return false; 
        }
        return true;
    }
};