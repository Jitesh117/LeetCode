class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        unordered_map<int,int>one,two;
        int n = a.size();
        vector<int>result;
        for(int i = 0;i<n;i++){
            int count = 0;
            one[a[i]]++;
            two[b[i]]++;
            for(auto it:one){
                if(two[it.first] > 0) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};