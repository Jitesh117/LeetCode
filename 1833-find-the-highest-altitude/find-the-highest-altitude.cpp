class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int temp = 0;
        for(auto g: gain){
            temp += g;
            result = max(temp, result);
        }
        return result;
    }
};