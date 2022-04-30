class Solution {
public:
    string reverseVowels(string s) {
        string t;
        for(int i = 0;i<s.size();i++)
            if(isVowel(s[i]))
                t.push_back(s[i]);
        reverse(t.begin(),t.end());
        int j =0;
        for(int i = 0;i<s.size();i++)
            if(isVowel(s[i]))
                s[i] = t[j++];
        return s;
    }
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || 
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
    }
};