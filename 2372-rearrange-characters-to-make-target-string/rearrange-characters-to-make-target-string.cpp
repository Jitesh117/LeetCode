class Solution {
public:
    int rearrangeCharacters(string s, string target) {
       unordered_map<char, int> input, output;
       for(char &c : s) input[c]++; 
       for(char &c : target) output[c]++; 
        int result = INT_MAX;
       for(auto it : output){
           result = min(input[it.first] / it.second, result);
       }
       return result;
    }
};