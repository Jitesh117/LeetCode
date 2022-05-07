class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxcap=0;
        int n=weights.size();
        
        for(int i=0;i<n;i++)
            maxcap+=weights[i];
        
        int beg=*max_element(weights.begin(),weights.end()),end=maxcap;
        int result;
        
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(solve(mid,weights,days)){
                result=mid;
                end=mid-1;
            }
            else
                beg=mid+1;
        }
        return result;
    }
    
     bool solve(int mid,vector<int>& weights,int days){
        int count=1,sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                count++;
                sum=weights[i];
            }
        }
        if(count<=days)
            return true;
        return false;
    }
};