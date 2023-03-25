class Solution {
public:
    string truncateSentence(string s, int k) {
        s.push_back(' ');
        string result;
        string temp;
        for(int i = 0;i<s.size();i++){
          if(k == 0) break;
           if(s[i] == ' '){
               result += temp ;
               result.push_back(' ');
               temp = "";
               k--;
           }   
           else{
               temp.push_back(s[i]);
           }
        }
        result.pop_back();
        return result;
    }
};