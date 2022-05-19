class Solution {
public:
   int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto row: grid){
            int hi=row.size(),lo=0,mid;
            while(hi>lo){
                mid = (hi+lo)/2;
                if(row[mid]>=0) lo=mid+1;
                else if (row[mid]<0) hi=mid;
            }
            count+=row.size()-lo;
        }
        return count;
    }
};