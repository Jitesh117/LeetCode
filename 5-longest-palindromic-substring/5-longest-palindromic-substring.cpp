class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(), ansi, ansj, len=0;
        string p=s, ans;
        reverse(p.begin(),p.end());
        int t[n+1][n+1];
        for(int i=0;i<=n;i++) 
        {
            t[i][0] = 0;
            t[0][i] = 0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==p[j-1])
                {
                    t[i][j] = 1+t[i-1][j-1];
                    if(t[i][j]>len)
                    {
                        string temp= s.substr(i-t[i][j],t[i][j]);
    
                        string rev = temp;
                        reverse(rev.begin(),rev.end());
                        if(temp == rev) 
                            len = t[i][j], ans=temp;
                    }
                }
                else t[i][j]=0;
            }
        }
        return ans;
    }
};