class Solution {
public:
   static bool comp(vector<int>& e1, vector<int>& e2){
         return (e1[0]==e2[0])?e1[1]>e2[1]:e1[0]<e2[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), comp);
        // sort(envelopes.begin(), envelopes.end());
        vector<int> v;
        for(int i=0;i < envelopes.size(); i++){
            if(i==0 or envelopes[i][1]>v[v.size()-1]){
                   v.push_back(envelopes[i][1]);
               }
               else{
                   int index = binarysearch(v,envelopes[i][1]);
                   v[index] = envelopes[i][1];
               }
        }
     return v.size();           
    }
    
    int binarysearch(vector<int> &v,int x){
        int i=0;
        int j=v.size()-1;
        int ans=0;
        while(i <= j){
            int mid=(i+(j-i)/2);
            if(v[mid]==x)
                return mid;
            else if(v[mid]>x){
                ans=mid;
                j=mid-1;
            }
            else
                i=mid+1;
        }
        return ans;
    }
   
};