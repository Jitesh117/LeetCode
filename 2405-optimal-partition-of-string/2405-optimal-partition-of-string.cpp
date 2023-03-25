class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>count = unordered_map<char,int>();
        int result = 0;
        for(char c:s){
            if(count[c]){
                count = unordered_map<char,int>();
                result++; 

            }
            count[c]++;
        }
        return result + 1;
    }
};