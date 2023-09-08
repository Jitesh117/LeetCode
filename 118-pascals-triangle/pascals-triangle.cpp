class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
        for(int i = 1;i<=n;i++){
            vector<int>temp;
            for(int j = 0;j < i; j++){
                if(j == 0 or j == i - 1)
                    temp.push_back(1);
                else
                    temp.push_back(v[i - 2][j - 1] + v[i - 2][j]);
            }
            v.push_back(temp);
        }
        return v;
    }
};