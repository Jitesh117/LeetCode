class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
        int i =0;
        int size = v[0].size();
        int bigsize = v.size();
        while(i<bigsize)
        {
            if(target < v[i][0] )
                return false;
            else
            {
                int beg = 0, last = size-1;
                while(beg<=last)
                {   int mid = (beg+last)/2;
                    if(target == v[i][mid])
                        return true;
                 else if(target < v[i][mid])
                     last = mid-1;
                 else
                     beg = mid+1;
                }
               
            }
            i++;
        }
        return false;
    }
};