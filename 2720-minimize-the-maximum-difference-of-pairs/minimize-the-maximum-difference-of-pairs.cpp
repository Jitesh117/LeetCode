class Solution {
public:
    bool helper(vector<int> &nums,int m,int p) {
        int cnt = 0,mx = 0;
        for(int i = 1; i < nums.size(); i += 1) {
            if(nums[i] - nums[i - 1] <= m) {
                i += 1;
                cnt += 1;
            }
        }
        return cnt >= p;
    }
    
    int minimizeMax(vector<int>& v, int p) {
        sort(v.begin(),v.end());
        int l = 0,r = v.back(), ans = -1;
        while(r >= l) {
            int m = (l + r)/2;
            if(helper(v,m,p)) {
                ans = m;
                r = m - 1;
            } else l = m + 1;
        }
        return ans;
    }
};