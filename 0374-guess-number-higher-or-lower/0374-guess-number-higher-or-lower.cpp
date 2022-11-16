/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       int beg = 1, end = n;
        while(beg<=end){
            int mid = beg+(end-beg)/2;
            int num = guess(mid);
            if(num == 0)
                return mid;
            else if(num == 1) beg = mid+1;
            else end = mid-1;
        }
        return -1;
    }
};