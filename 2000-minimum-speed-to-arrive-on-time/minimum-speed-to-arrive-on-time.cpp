class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
       int beg = 1, end = 1e7;
       int result = -1;
       int n = dist.size();
       while(beg <= end){
           int mid = beg + (end - beg)/ 2;
           double time = 0;

           if(canReach(dist, hour, mid)){
               result = mid;
               end = mid - 1;
           }
           else beg = mid + 1;
       } 
       return result;
    }
     bool canReach(vector<int>& dist, double hour, int speed){
        double time = 0;
        for (int i = 0; i < dist.size() - 1; ++i)
            time += ceil((double)dist[i] / speed);
        
        time += ((double)dist.back()) / speed;
        return time <= hour;
    }
};