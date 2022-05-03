class Solution {
public:
    int mySqrt(long x) {
        int beg = 0,end = x,ans;
        while(beg<=end)
        {
            long mid = beg + (end-beg)/2;
            if(mid*mid == x)
                return mid;
            else if(mid*mid<x)
            {
                ans=mid;
                beg=mid+1;
            }
            else
                end=mid-1;
        }
        return ans;
    }
};