class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
       vector<int>temp = arr;
       sort(temp.begin(), temp.end());
       int diff = temp[1] - temp[0];
       for(int i = 2; i< arr.size(); i++){
           if(temp[i] - temp[i-1] != diff) return false;
       } 
       return true;
    }
};