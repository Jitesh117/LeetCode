class Solution {
public:
    bool isIsomorphic(string s, string t) {
        return solve(s,t) and solve(t,s);
    }
    bool solve(string s,string t){
        unordered_map<char,char>umap;
        for(int i = 0;i<s.size();i++)
        {
            if(umap.find(s[i]) != umap.end()){
                if(umap[s[i]] != t[i]) return false;
            }
            else
                umap[s[i]] = t[i];
        }
        return true;
    }
};