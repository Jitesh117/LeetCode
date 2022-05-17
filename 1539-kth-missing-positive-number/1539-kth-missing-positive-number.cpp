class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cnt = 1;
        int cur = 1;
        while(k)
        {
            if(!bin(arr,cur))
            {
                k--;
                
            }
            cur++;
        }
        return cur-1;
    }
    bool bin(vector<int>& arr,int key)
    {
        int beg = 0,end = arr.size()-1;
        while(beg<=end)
        {
            int mid = beg+(end-beg)/2;
            if(arr[mid] == key)
                return true;
            else if(arr[mid]<key)
                beg = mid+1;
            else 
                end = mid-1;
        }
        return false;
    }
};