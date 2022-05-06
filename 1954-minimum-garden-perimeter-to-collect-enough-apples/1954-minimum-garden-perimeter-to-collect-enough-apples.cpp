class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
        long long beg = 0,end= 1000000;
        long long ans;
        while(beg<=end)
        {
            long long mid = beg + (end-beg)/2;
            if(solve(mid) >=neededApples)
            {
                ans = mid;
                end = mid-1;
            }
            else
                beg= mid+1;
        }
        return 8*ans;
    }
    long long solve(long long n)
    {
        return 12*(n*(n+1)*(2*n+1))/6;
    }
};