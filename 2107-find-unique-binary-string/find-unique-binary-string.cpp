class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string result;
        int i = 0;
        for(string s: nums){
            result += s[i++] == '0'? '1' : '0';
        }
        return result;
    }
};