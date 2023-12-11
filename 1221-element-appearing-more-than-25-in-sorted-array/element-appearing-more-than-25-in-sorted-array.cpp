class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       unordered_map<int,int>map;
       int n = arr.size();
       for(int i = 0; i < n; i++){
           map[arr[i]]++;
           if(map[arr[i]] > n / 4) return arr[i];
       }
       return -1;
    }
};