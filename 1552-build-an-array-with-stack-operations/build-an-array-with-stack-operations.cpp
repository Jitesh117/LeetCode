class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>result;
        int cur = 1;
        for(int i = 0;i <target.size(); i++){
            while(cur != target[i]){
                result.push_back("Push");
                result.push_back("Pop");
                cur++;
            }
            cur++;
            result.push_back("Push");
        }
        return result;
    }
};