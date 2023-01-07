class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int>result;
        int j;
        for(int i = arr.size();i>0;i--){
            for(j = 0;arr[j] != i;j++);
            reverse(arr.begin(),arr.begin()+j+1);
            result.push_back(j+1);
            reverse(arr.begin(),arr.begin() + i);
            result.push_back(i);
            }
        return result;
    }
};