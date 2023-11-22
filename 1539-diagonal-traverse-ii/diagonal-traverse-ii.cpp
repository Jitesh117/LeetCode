class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       map<int,vector<int>> diag;
       vector<int> result;
       for(int i = 0; i < nums.size(); i++){
           for(int j = 0; j < nums[i].size(); j++){
               diag[i + j].push_back(nums[i][j]);
           }
       } 
       for(auto it: diag){
           vector<int> elements = it.second;
           reverse(elements.begin(), elements.end());
           for(int elem : elements){
               result.push_back(elem);
           }
       }
       return result;
    }
};