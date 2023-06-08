class Solution {
public:
   int countNegatives(vector<vector<int>>& grid) {
        int result=0;
        for(auto row: grid){
            int end = row.size(),beg = 0, mid;
            while(beg < end){
                mid = (beg + end)/2;
                if(row[mid]>=0) beg = mid + 1;
                else if (row[mid]<0) end = mid;
            }
            result += row.size() - beg;
        }
        return result;
    }
};