class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int beg = 0, last = letters.size()-1;
        int ans = 0;
        while(beg<=last)
        {
            int mid = beg + (last-beg)/2;
            if(letters[mid]>target)
            {
                ans = mid;
                last = mid-1;
            }
           else if(letters[mid]<=target)
            {
                beg = mid+1;
            }
        }
        
        return letters[ans];
    }
};