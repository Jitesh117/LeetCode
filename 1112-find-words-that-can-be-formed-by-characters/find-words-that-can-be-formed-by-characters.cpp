class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char, int> char_count;
       int result = 0;
       for(char c: chars) char_count[c]++;
       for(string &word : words) {
           bool cant_form = false;
           unordered_map<char, int> cur_count = char_count;
           for(char c : word){
               if(cur_count[c] == 0){
                    cant_form = true;
                    break;
               } 
               else cur_count[c]--;
           }    
           if(!cant_form)result += word.size();
       }
       return result;
    }
};