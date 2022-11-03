class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     unordered_map<string,int> umap;
        int count=0;
        for(string word:words)
        {
           umap[word]++;
        }
        bool flag=false;
        for(string word:words)
        {
            if(umap[word])
            {
                string t="";
                t+=word[1];
                t+=word[0];
                if(t==word)
                    count+=umap[t]/2;
                else count+=min(umap[t],umap[word]);
                if(umap[t]%2==1 && t[0]==t[1])
                    flag=true;
                umap[word] = 0;
                umap[t] = 0;
            }
        }
        count*=4;
        if(flag) count+=2;
        return count;   
    }
};