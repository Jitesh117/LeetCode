class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int beg = 1,end = INT_MAX/2;
        while(beg<=end){
            int mid = beg + (end-beg)/2;
            if(timeTaken(piles,mid)>h){
                beg = mid+1;
            } 
            else 
                end = mid-1;
        }
        return beg;
    }
    int timeTaken(vector<int>&piles, int k){
        int result = 0;
        for(auto it:piles){
            if(it%k == 0) result+=it/k;
            else
                result+=it/k+1;
        }
        return result;
    }
};