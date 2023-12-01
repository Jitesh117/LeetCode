class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string one, two;
       for(string &word : word1) one += word; 
       for(string &word : word2) two += word; 

       return one == two;
    }
};