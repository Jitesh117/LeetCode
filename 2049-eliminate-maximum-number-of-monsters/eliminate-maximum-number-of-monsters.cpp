class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
       vector<double> time;
       int n = dist.size();
       for(int i = 0; i < n; i++){
           time.push_back(double((double)dist[i] / (double)speed[i]));
       }
       sort(time.begin(), time.end());
       int result = 1;
       for(int i=1; i<dist.size(); i++){
            if(time[i]>i) result++;
            else break;
        }
        return result;
    }
};