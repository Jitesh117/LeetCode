class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(10,"");
        string temp;
        string result;
        for(int i = 0;i<s.size();i++){
            if(!isdigit(s[i])){
                temp.push_back(s[i]);
            }
            else{
                v[s[i] - '0'] = temp;
                temp = "";
                i++;
            }
        }
        
        for(int i = 0;i<v.size();i++){
            if(v[i].size()>0){
                result+=v[i];
                result.push_back(' ');
            }
        }
        result.pop_back();
        return result;
    }
};