/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int beg = 1,last = n;
        int ans;
        while(beg<=last)
        {
            int mid = beg + (last-beg)/2;
            if( guess(mid) == 0)
                return mid;
            else if(guess(mid)== 1)
                beg = mid+1;
            else
                last = mid-1;
        }
        return ans;
    }
};