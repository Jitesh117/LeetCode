class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(firstpos(nums,target));
        v.push_back(endpos(nums,target));
        return v;
    }
    int firstpos(vector<int>& v,int target)
    {   int first = -1;
        int beg = 0,last = v.size()-1;
        while(beg<=last)
        {   int mid = (beg+last)/2;
            if(v[mid] == target)
            {
                first = mid;
                last= mid-1;
            }
            else if(v[mid]<target)
                beg = mid+1;
            else
                last = mid-1;
        }
     return first;
    }
    int endpos(vector<int>& v,int target)
    {   int end = -1;
        int beg = 0,last = v.size()-1;
        while(beg<=last)
        {   int mid = (beg+last)/2;
            if(v[mid] == target)
            {
                end = mid;
               beg = mid+1;
            }
            else if(v[mid]<target)
                beg = mid+1;
            else
                last = mid-1;
        }
     return end;
    }
};