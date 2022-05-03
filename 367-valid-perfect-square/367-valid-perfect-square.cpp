class Solution {
public:
    bool isPerfectSquare(long num) {
        int beg =0,end = num;
        while(beg<=end)
        {
            long mid = beg+(end-beg)/2;
            if(mid*mid == num)
                return true;
            else if(mid*mid <num)
                beg=mid+1;
            else
                end=mid-1;
        }
        return false;
    }
};