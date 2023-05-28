class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
        int n = arr.size(); 
        vector<int>dp(n+1,-1);  
        sort(arr.begin(), arr.end());
        
        return solve(0, arr, dp);
    }

    int solve( int i, vector<int> &arr, vector<int>&dp){
        if(i >= arr.size()) return 0; 
        
        if(dp[i] != -1) return dp[i];
        int currValue = arr[i];
        int currSum = arr[i]; 
        int index = i + 1;
        
        while(index < arr.size() and arr[index] == currValue){
            currSum += arr[i];
            index++;
        }
        
        while(index < arr.size() and arr[index] == currValue + 1){
            index++;
        }

        return dp[i] = max(currSum + solve(index, arr, dp), solve(i + 1,arr, dp));
    }
};