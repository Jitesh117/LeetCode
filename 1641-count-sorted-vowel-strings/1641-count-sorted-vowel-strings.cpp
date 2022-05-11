class Solution {
public:
    int result=0,N;
    vector<char>v={'a','e','i','o','u'};
    int countVowelStrings(int n) {
        N=n;
        char ch = '#';
        solve(ch,0);
        return result;
    }
    void solve(char ch,int j)
    {
        if(j == N)
        {
            result++;
            return;
        }
        for(int i = 0;i<5;i++)
        {
            if(ch!='#' && ch>v[i])
                continue;
            ch=v[i];
            solve(ch,j+1);
        }
        
    }
};