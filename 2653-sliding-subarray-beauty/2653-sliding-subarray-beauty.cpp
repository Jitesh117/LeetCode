class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int>result;
        map<int,int>umap;
        for(int i = 0;i<n;i++){
           umap[nums[i]]++;
            if(i>=k-1){
                if(i>=k) umap[nums[i-k]]--;
                int sum = 0;
                for(auto it: umap){
                    sum += it.second;
                    if(sum >= x){
                        result.push_back(it.first < 0? it.first : 0);
                        break;
                    }
                }
            }
        }
        return result;
    }
};