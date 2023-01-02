class Solution {
public:
    unordered_map<int,int>m;
    int dp[7001][2];
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        
        for(auto i:forbidden)
            m[i] = 1;
        
        memset(dp,-1,sizeof(dp));
        int result = solve(0,0,a,b,x);
        return (result > 1e9)? -1:result;
    }
    int solve(int i,bool back,int &a,int &b,int &x)
    {
        if(i == x)return 0;
        if( i < 0 || m[i] || i>6000 )
            return 1e9;
        
        
        if(dp[i][back]!=-1) return dp[i][back];
        // either go forward 
        dp[i][back] = 1 + solve(i+a,0,a,b,x);
        //go backward but cannot go consecutively 2 times
        if(!back)
        {
            dp[i][back] = min(dp[i][back],1 + solve(i-b,1,a,b,x));
        }
      
        return dp[i][back];
    }
};