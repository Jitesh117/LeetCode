class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int beg = 1,end = INT_MAX/2;
        int ans;
        while(beg<=end)
        {
            int mid = beg+(end-beg)/2;
            int numhours = solve(piles,mid);
            if(numhours > h)
                beg=mid+1;
            else
            {
                end= mid-1;
                ans = mid;
            }
        }
        return beg;
    }
    
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
};