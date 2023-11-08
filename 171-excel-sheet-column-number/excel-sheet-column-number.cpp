class Solution {
public:
    int titleToNumber(string columnTitle) {
       int result = 0;
       for(char c : columnTitle){
           int number = c - 'A' + 1;
           result = result * 26 + number;
       } 
       return result;
    }
};