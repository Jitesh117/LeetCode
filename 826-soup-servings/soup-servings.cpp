class Solution {
public:
    unordered_map<int, unordered_map<int, double>> dp;
    double soupServings(int n) {
       if(n >= 5000) return 1;
       return solve(n, n); 
    }

    double solve(int a, int b){
        if(a == 0 and b != 0) return 1;
        if(a == 0 and b == 0) return 0.5;
        if(a != 0 and b == 0) return 0;
        if(dp[a][b] != 0) return dp[a][b];
        double result = 0;
        result +=  0.25 * solve(a - min(a,100), b);
        result +=  0.25 * solve(a - min(a,75), b - min(b, 25));
        result +=  0.25 * solve(a - min(a, 50), b - min(b, 50));
        result +=  0.25 * solve(a - min(a, 25), b - min(b, 75));

        return dp[a][b] = result;
    }
};