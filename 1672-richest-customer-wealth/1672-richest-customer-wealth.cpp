class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int result=0,sum=0;
       for(int i = 0;i<v.size();i++)
           {
            sum=0;
           for(int j = 0;j<v[0].size();j++)
           {
              sum+=v[i][j];
           }
           result = max(sum,result);
       }
        return result;
    }
};