class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        vector<int>pref(n+1);
        pref[0] = 0;
        for(int i = 1; i < n; i++)
            pref[i] = pref[i-1] + v[i-1];
        
    
        vector<int>suff(n+1);
        suff[n] = 0;
        for(int i = n-1; i >= 0; i--)
            suff[i] = suff[i+1] + v[i];
        
        int ans = 0;
        for(int i = 0; i <= k; i++)
            ans = max(ans, pref[i] + suff[n-k+i]);
        return ans;
    }
};