class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> pos;
        int result = -1;
        for(int i = 0; i < s.size(); i++){
            if(pos[s[i]] == 0)
                pos[s[i]] = i + 1;
                
            result = max(result, i - pos[s[i]]);
        }
        return result;
    }
};