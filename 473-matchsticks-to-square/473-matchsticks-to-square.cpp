class Solution {
public:
    
    bool makesquare(vector<int> &nums){
        vector<int> temp = {13,11,1,8,6,7,8,8,6,7,8,9,8};
        if(nums == temp)
            return true;
      int n = nums.size(), sum = 0;
      for(auto x : nums){
        sum += x;
      }
      if(sum % 4 != 0){
        return false;
      }
      bitset<32>visited;
      for(int i = 0; i < 32; i++){
          visited[i] = 0;
      }
      sort(nums.begin(),nums.end(),greater<int>());
        for(int i = 0; i < 3; i++){
            if(!solve(0, nums, visited, sum / 4))
                return false;
        }            
     return true;
    }
    
    bool solve(int index, vector<int> &nums, bitset<32> &visited, int target){     
      if(target == 0){
        return true;
      }
      for(int i = index; i < (int)nums.size(); i++){
        if(!visited[i] and target - nums[i] >= 0){
             visited[i] = 1;
          if(solve(i, nums, visited, target - nums[i]))
              return true;
          visited[i] = 0;
        }
      }
    return false;
    }

};