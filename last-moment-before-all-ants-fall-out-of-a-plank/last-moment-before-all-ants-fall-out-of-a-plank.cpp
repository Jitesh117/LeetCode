class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int result = 0;
        for(auto& i: left) result = max(result, i);
        for(auto& i: right) result = max(result, n - i);

        return result;
    }
};