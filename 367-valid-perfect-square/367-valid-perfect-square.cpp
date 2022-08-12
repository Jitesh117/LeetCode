class Solution {
public:
    bool isPerfectSquare(long long num) {
        int beg = 1,end= num;
        while(beg<=end){
            long long  mid = beg + (end-beg)/2;
            long long sqr = mid*mid;
            if(sqr == num) return true;
            else if(sqr<num) beg = mid+1;
            else end = mid-1;
        }
        return false;
    }
};