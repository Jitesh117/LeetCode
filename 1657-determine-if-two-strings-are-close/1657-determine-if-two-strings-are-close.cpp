class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>one(26,0),two(26,0);
        set<char>sone,stwo;
        for(auto c:word1){
            one[c-'a']++;
            sone.insert(c);
        }
        for(auto c:word2){
            two[c-'a']++;
            stwo.insert(c);
        }
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());
        
        return sone == stwo and one == two;
    }
};