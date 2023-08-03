class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int count = 0;
            
        int t[n+1][m+1];
        
        for(int i = 0;i<=n;i++)
            for(int j = 0;j<=m;j++)
                if( i == 0 || j == 0)
                    t[i][j] = 0;
        for(int i = 1;i<=n;i++)
            for(int j = 1 ;j<=m ; j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    t[i][j] =(int)s1[i-1]+ t[i-1][j-1];
                   
                }
                else
                {
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
                }
            }
       for(int i = 0;i<n;i++)
           count+=s1[i];
        for(int i = 0;i<m;i++)
            count+=s2[i];
        
        return count - 2*t[n][m];
    }
};