class Solution {
public:
    string reverseWords(string s) {
        if(s.size() == 0) return s;
        vector<string> v;
        string result;
        for(int i=0; i<s.size(); i++) {
            string word;
            if(s[i] == ' ') continue; 
            while(i< s.size() and s[i] != ' ' ) {
                word += s[i];
                i++;
            }
            v.push_back(word); 
        }
        while(v.size() - 1){
            result += (v.back() + " ");
            v.pop_back();
        }
        result += v.back();
        return result;
    }
};