class Solution {
public:
    vector<int> getRow(int n) {
         vector<vector<int>> v;
        for(int i =1;i<=n+1;i++) 
            {
            vector<int> temp;
            for(int j=0;j<i;j++) 
                {
                if(j==0||j==i-1) 
                    temp.push_back(1);
                else
                    temp.push_back(v[i-2][j-1]+v[i-2][j]) ;
            }
            v.push_back(temp) ;
        }
        vector<int> result;
        for(int i = 0;i<v[n].size();i++)
            result.push_back(v[n][i]);
        return result;
    }
};