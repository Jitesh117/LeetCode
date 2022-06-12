class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        unordered_map<int,int> hash;
        int n = v.size();
        int k = n;
       for(int i = 0;i<n;i++)
       {
           hash[v[i]]++;
           if(hash[v[i]]>2)
            {
               v[i]  = INT_MAX;
                k--;
           }
       }
        sort(v.begin(),v.end());
       return k;
        
    }
};