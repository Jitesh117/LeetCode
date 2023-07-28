class Solution {
public:
    int solve(vector<int>& nums, int sum1 , int sum2, bool turn ,int i, int j ){
        if(i>j){
            if(sum1 >= sum2)
                return 1;
            
            return 0;
        }
        
        if(turn){
             return solve(nums,sum1+nums[i],sum2,false,i+1,j) or solve(nums,sum1+nums[j],sum2,false,i,j-1);
        }
        
        else
           return solve(nums,sum1,sum2+nums[i],true,i+1,j) and  solve(nums,sum1,sum2+nums[j],true,i,j-1);
        
        
    }
    

    bool PredictTheWinner(vector<int>& nums) {
        return solve(nums,0,0,true,0,nums.size()-1);
    }
};