class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long i = 0;i*i<=c;i++)
            if(bin(c-i*i))
                return true;
        return false;
    }
    bool bin(int i)
    {
        int beg = 0,end = i;
        while(beg<=end)
        {
            long mid = beg+(end-beg)/2;
            if(mid*mid == i)
                return true;
            else if(mid*mid < i)
                beg=mid+1;
            else
                end = mid-1;
        }
        return false;
    }
};