class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(auto it:s) m[it]++;
        for(auto it:t) m[it]--;
        int result = 0;
        for(auto it:m) result+=abs(it.second);
        return result;
    }
};