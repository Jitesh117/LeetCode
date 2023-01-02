class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        vector<int>vis(arr.size(),0);
        return solve(start,arr,vis);
    }
    bool solve(int i, vector<int>&arr, vector<int>&vis){
        if(i<0 or i>=arr.size() or vis[i]) return false;
        if(arr[i] == 0) return true;
        vis[i] = 1;
        return solve(i-arr[i],arr,vis) or solve(i+arr[i],arr,vis);
    }
    
};