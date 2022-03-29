class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> t;
        for(int i = 0;i<n;i++)
           t.push_back(0);
         return min(solve(cost,n-1,t),solve(cost,n-2,t));
    }
    int solve(vector<int>& cost, int n ,vector<int>& t)
    {
        if(n<0)
            return 0;
        if(n==1|| n==0)
            return cost[n];
        if(t[n]!=0)
            return t[n];
        t[n] = cost[n] + min(solve(cost,n-1,t),solve(cost,n-2,t));
        // return cost[n] + min(solve(cost,n-1),solve(cost,n-2));
        return t[n];
    
    }
};