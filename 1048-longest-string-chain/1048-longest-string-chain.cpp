class Solution {
public:
    bool check(string &a,string &b)
    {
        if(a.size()!=b.size()+1)return false;
        int i=0,j=0;
        while(i<a.size())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i==a.size() and j==b.size())return true;
        else
        return false;
    }
    
    static bool compare(string &a,string &b)
    {
        return a.size()<b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        int n=words.size();
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(check(words[i],words[prev]))
               dp[i]=max(dp[i],1+dp[prev]);
            }
            if(dp[i]>maxi){
                maxi=dp[i];
            }
        }
        return maxi;
    }
};