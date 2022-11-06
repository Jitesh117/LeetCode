class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for(string s:operations)
            if(s[0] == '+' or s[2] == '+') result++;
            else result--;
        return result;
    }
};