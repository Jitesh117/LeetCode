class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long beg = time[0], end = 1e14;
        while(beg<end){
            long long mid = beg + (end-beg)/2;
            if(tripsTaken(time,mid)>=totalTrips)
                end = mid;
            else
                beg = mid + 1;
        }
        return beg;
    }
    long long tripsTaken(vector<int>& time, long long  givenTime){
        long long result = 0;
        for(auto it:time){
            result+=givenTime/it;
        }
        return result;
    }
};