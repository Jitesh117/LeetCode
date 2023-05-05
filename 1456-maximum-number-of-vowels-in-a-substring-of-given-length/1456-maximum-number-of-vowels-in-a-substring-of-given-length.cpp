class Solution {
public:
    int maxVowels(string s, int k) {
        int maxlen = 0;
        int len = 0;
        int n = s.size();
        for(int i = 0;i<n;i++){
           if(isVowel(s[i])) 
               len++; 
            if(i >= k and isVowel(s[i-k])) len--;
           
           maxlen = max(maxlen, len);
        }
        return maxlen;
    }
    bool isVowel(char c){
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') 
            return true;
        return false;
    }
};