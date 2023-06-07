class Solution {
public:
	int longestArithSeqLength(vector<int>& nums) {
	int n = nums.size(), dif;

  int res = 1;    
   vector<vector<int>> dp( n+1, vector<int> ( 2001, 1 ) );
		for(int i = 1; i < n; i++ ){   
					for(int j = 0; j < i;j++ ){   
							dif = nums[i] - nums[j] + 500;
							dp[i][dif] =max( dp[i][dif],dp[j][dif] + 1);
							res= max( res, dp[i][dif] );         
					}
			}
    return res;
  }
};