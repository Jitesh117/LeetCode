class Solution {
public:
    string temp;
    map<int,int> flag;
    set<string> result;
    int numTilePossibilities(string tiles) {
        solve(tiles);
        
        return result.size();
    }
    void solve(string tiles)
    {
        for(int i = 0;i<tiles.size();i++)
        {

            if(flag[i]!=1)
            {
                temp.push_back(tiles[i]);
                result.insert(temp);
                flag[i]=1;
                solve(tiles);
                flag[i]=0;
                temp.pop_back();
            }
        }
    }
};