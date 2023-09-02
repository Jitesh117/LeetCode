class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char> odd(26,0), even(26,0);
        for(int i = 0; i < s1.size(); ++i){
            if(i % 2) { odd[s1[i] - 'a']++; odd[s2[i] - 'a']--; }
            else { even[s1[i] - 'a']++; even[s2[i] - 'a']--; }
        }
        for(int i = 0; i < odd.size(); ++i){
            if(odd[i] or even[i]) return false;
        }
        return true;
    }
};