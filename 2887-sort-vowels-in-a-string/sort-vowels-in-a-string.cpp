class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(char c : s){
            if(isVowel(c)) v.push_back(c);
        }    
        sort(v.begin(), v.end());
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])) swap(s[i], v[j++]);
        }
        return s;
    }
    
    bool isVowel(char &x){
        if (x == 'a' || x == 'e' || x == 'i' || 
            x == 'o' || x == 'u' || x == 'A' || 
            x == 'E' || x == 'I' || x == 'O' || x == 'U')
                return true;
        return false;
}
};