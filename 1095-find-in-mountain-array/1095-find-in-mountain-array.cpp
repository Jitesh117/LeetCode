/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &marr) {
        int beg = 0,end = marr.length()-1,mid;
        while(beg<=end)
        {
            mid = beg+(end-beg)/2;
            if(marr.get(mid) <marr.get(mid+1))
                beg = mid+1;
            else
                end = mid-1;
        }
        int peak = beg;
        // bool fL = false,fR = false;
        beg = 0,end = peak;
        while(beg<=end)
        {
            mid = beg+(end-beg)/2;
            if(marr.get(mid) == target)
               return mid;
            else if(marr.get(mid)<target)
                beg = mid+1;
            else
                end = mid-1;
        }
       
        beg = peak+1,end = marr.length()-1;
        while(beg<=end)
        {
             mid = beg+(end-beg)/2;
            if(marr.get(mid) == target)
                return mid;

            else if(marr.get(mid)>target)
                beg = mid+1;
            else
                end = mid-1;
        }
       return -1;
        
    }
};