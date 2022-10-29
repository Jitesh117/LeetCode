class Solution {
public:
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        vector<pair<int,int>>vp;
        int result = 0;
        int n = pt.size();
        for(int i = 0;i<n;i++)
            vp.push_back({gt[i],pt[i]});
        sort(vp.rbegin(),vp.rend());
        for(int i=1; i<n; i++)
            vp[i].second+=vp[i-1].second;
        for(int i=0; i<n; i++)
            result=max(result,vp[i].first+vp[i].second);
        return result;
    }
};