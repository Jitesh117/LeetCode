class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for(auto s: words){
            string temp = s;
            string word;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == separator  ){
                    if(word.size())result.push_back(word);
                        word = "";
                }
                else{
                    word.push_back(s[i]);
                    if(i == s.size() - 1){
                    if(word.size())result.push_back(word);
                        word = "";
                        
                    }
                }
            }
        }
        return result;
    }
};