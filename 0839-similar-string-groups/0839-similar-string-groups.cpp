class Solution {
public:
    int par[301];
    
    int find(int a){
        if(par[a] < 0) return a;
        
        return par[a] = find(par[a]);
    }
    
    void Union(int a, int b){
        int p = find(a);
        int q = find(b);
        
        if(p == q) 
            return; 
        
        par[p] = q;
    }
    
    bool areSimiliar(string &str1, string &str2){
        if(str1 == str2)
            return true;
        
        int count = 0; 
        
        for(int i = 0; i < str1.size(); i++){
            if(str1[i] != str2[i]){
                count++;
            }
        }
        
        if(count == 2) return true;
        
        return false;  
    }
    
    int numSimilarGroups(vector<string>& arr) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++) par[i] = -1;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(areSimiliar(arr[i],arr[j])){
                    Union(i, j);
                }
            }
        }
        
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            if(par[i] < 0) 
                ans++;
        }
        
        return ans; 
    }
};