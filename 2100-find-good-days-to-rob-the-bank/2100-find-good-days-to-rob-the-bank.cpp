class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& s, int time) {
        int n = s.size();
       vector<int>pre(n),suf(n);
       pre[0]=1;
        for(int i = 1;i<n;i++)
            if(s[i]<=s[i-1])
                pre[i]=pre[i-1]+1;
            else
                pre[i] = 1;
        suf[n-1] = 1;
        for(int i = n-2;i>=0;i--)
            if(s[i]<=s[i+1])
                suf[i]=suf[i+1]+1;
            else
                suf[i] = 1;
        vector<int> result;
        for(int i = 0;i<n;i++)
            if(pre[i]>=time+1 && suf[i]>=time+1)
                result.push_back(i);
        return result;
        
    }
};