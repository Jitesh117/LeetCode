class Solution {
public:
    string removeStars(string s) {
        string result;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '*') result.pop_back();
            else
                result.push_back(s[i]);
        }
        return result;
    }
};