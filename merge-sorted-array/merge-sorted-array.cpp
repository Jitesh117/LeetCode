class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> temp;
        int first = 0,second = 0;
        for(int i = 0;i<m;i++)
        {
           temp.push_back(nums1[i]);
        }
       for(int i = 0;i<(m+n);i++){
           if(first<m && second<n){
               if(temp[first]<nums2[second]){
                   nums1[i] = temp[first++];
               }
               else 
                   nums1[i] = nums2[second++];
           }
           else if(first<m)
               nums1[i]= temp[first++];
           else
               nums1[i]= nums2[second++];
       }
    }
};