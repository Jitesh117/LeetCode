class Solution {
public:
    int solve(vector<int> &piles, int k)
    {
        int numhours=0;
        for(int i = 0;i<piles.size();i++)
        {
            if(piles[i]%k == 0)
                numhours+=piles[i]/k;
            else
                numhours+=piles[i]/k + 1;
        }
        return numhours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int beg = 1,end = INT_MAX/2;
        int ans;
        while(beg<=end)
        {
            int H = beg+(end-beg)/2;
            int numhours = solve(piles,H);
            if(numhours > h)
                beg=H+1;
            else
            {
                end= H-1;
                ans = H;
            }
        }
        return ans;
    }
};