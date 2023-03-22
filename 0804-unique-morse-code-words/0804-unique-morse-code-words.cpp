class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> gen_codes;
    
    for(auto word : words) {
        string temp = "";
        for(auto ch : word)
            temp += code[ch - 'a'];
        gen_codes.insert(temp);
    }
    
    return gen_codes.size();
    }
};