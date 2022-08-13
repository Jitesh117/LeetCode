class Solution {
public:
    int mySqrt(int x) {
       long beg = 1,end = x;
        long mid;
        while(beg<=end){
            mid = beg+(end-beg)/2;
            long long  ans = mid*mid;
            if(ans == x) return mid;
            else if(ans<x) beg = mid+1;
            else end = mid-1;
        }   
        return end;
    }
};