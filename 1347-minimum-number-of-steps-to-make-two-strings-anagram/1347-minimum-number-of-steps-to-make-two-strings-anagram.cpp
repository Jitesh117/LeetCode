class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> hash(26);
       for(int i =0;i<s.size();i++)
           hash[s[i]-'a']++;
        for(int i = 0;i<t.size();i++)
            hash[t[i]-'a']--;
        int count = 0;
        for(int i = 0;i<26;i++)
            if(hash[i]<0)
                count+=abs(hash[i]);
        return count;
    }
};