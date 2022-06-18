class WordFilter {
public:
    unordered_map<string,int>hash;
    WordFilter(vector<string>& words) {
        for(int i = 0;i<words.size();i++)
        {
            string word = words[i];
            int n = word.size();
            for(int j = 1;j<=n;j++)
            {
                string p = word.substr(0,j);
                for(int k = 0;k<n;k++)
                {
                    string s = word.substr(k,n);
                    hash[p+"#"+s]=i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
     string search = prefix + "#" + suffix;
        return hash[search]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */