class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
     sort(satisfaction.begin(), satisfaction.end());
        int result = 0, total = 0, n = satisfaction.size();
        for (int i = n - 1; i >= 0 and satisfaction[i] > -total; i--) {
            total += satisfaction[i];
            result += total;
        }
        return result;   
    }
};