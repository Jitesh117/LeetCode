class Solution {
public:
    int tribonacci(int n) {
        int t[40] = {0};
        t[1] = t[2] = 1;
        for(int i = 3;i<=n;i++){
            t[i] = t[i-3] + t[i-2] + t[i-1];
        }
        return t[n];
    }
};