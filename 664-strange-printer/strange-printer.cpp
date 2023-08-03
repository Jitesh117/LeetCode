class Solution {
public:
    int n;
    int strangePrinter(string s) {
        n = s.length() ;
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, n-1, s, dp);
    }
    int solve(int l, int h, string& s, vector<vector<int>>& dp){
        if(l == h)                                 
            return 1;
        else if(l > h)                        
            return 0;
        if(dp[l][h] != -1)                    
            return dp[l][h];
        int i = l+1;
        while(i <= h && s[i] == s[l])i++;                 
        
        if(i == h+1)                    
            return 1;                    
        
        int normal = 1 + solve(i,h,s, dp);      
        
        int cont = INT_MAX;            
        
        for(int j = i; j <= h; j++){
            if(s[l] == s[j]){
                int x = solve(i,j-1,s, dp) + solve(j,h,s, dp);
                cont = min(cont, x);
            }
        }
        
        return dp[l][h] = min(cont,normal);            
    }

};