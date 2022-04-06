class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int t[coins.size()+1][amount+1];
        for(int i = 0;i<=coins.size();i++)
            for(int j = 0;j<=amount;j++)
            {
                if(i == 0)
                    t[i][j] = 0;
                if(j == 0)
                    t[i][j] = 1;
            }
        for(int i = 1;i<=coins.size();i++)
            for(int j =1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    t[i][j] = t[i][j-coins[i-1]]+t[i-1][j];
                }
                else
                    t[i][j] = t[i-1][j];
            }
        return t[coins.size()][amount];
    }
};