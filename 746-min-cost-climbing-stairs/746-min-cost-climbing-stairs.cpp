class Solution {
public:
    vector<int> t;
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        t=vector<int>(n,-1);
         return min(solve(cost,n-1),solve(cost,n-2));
    }
    int solve(vector<int>& cost, int n )
    {
        if(n<0)
            return 0;
        if(t[n]!=-1)
            return t[n];
        if(n==1|| n==0)
            return t[n]=cost[n];
        return t[n]=cost[n] + min(solve(cost,n-1),solve(cost,n-2));
    
    }
};