class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int result = 0;
       for(string s:words){
           if(s.size()>=pref.size()){
              string temp = s.substr(0,pref.size());
               if(temp == pref) result++;
           }
       } 
        return result;
    }
    
};