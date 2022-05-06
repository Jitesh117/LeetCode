class Solution {
public:
    int minDays(vector<int>& bday, int m, int k) {
        if(bday.size()<m*k)
            return -1;
        int ans;
        int beg = 1,end = INT_MAX/2;
        while(beg<=end)
        {
            int mid = beg +(end-beg)/2;
            if(solve(bday,m,k,mid))
            {
                ans = mid;
                end=mid-1;
                
            }
            else
                beg=mid+1;
        }
        return ans;
    }
    
    bool solve(vector<int>& bday,int m,int k,int mid)
    {  int bouq=0,flow=0;
     for(int i = 0;i<bday.size();i++)
     {
        if(bday[i]<=mid)
        {
            flow++;
            if(flow == k)
            {
             flow = 0;
             bouq++;
            }
        }
        else
            flow=0;
            
     }
     return bouq>=m;
    }
};