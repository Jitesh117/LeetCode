class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>umap;
        
        int i=0,j=0,result=0;
        while(j<fruits.size()){
            umap[fruits[j]]++;
        
            while(umap.size()>2){
                if(umap[fruits[i]]==1){
                    umap.erase(fruits[i]);
                }
                else{
                    umap[fruits[i]]--;
                }
                i++;
            }
            
            result=max(result,j-i+1);
            j++;
        }
        
        return result;
    }
};