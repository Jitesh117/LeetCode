class Solution {
public:
    vector<int> getAverages(vector<int>& A, int k) {
       long N = A.size(), len = 2 * k + 1, sum = 0; 
       vector<int> ans(N,-1);
        if(N<len)
            return ans;
       for(int i = 0;i<N;i++)
       {
           sum+=A[i];
           if(i-len>=0) 
               sum-=A[i-len];
           if(i>=len-1)
           {
               ans[i-k]=sum/len;
           }
           
       }
        return ans;
    }
};