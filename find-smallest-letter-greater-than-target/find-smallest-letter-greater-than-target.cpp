class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int beg = 0, end = letters.size()-1;
        int ans = 0;
        while(beg <= end){
            int mid = beg + (end-beg)/2;
            if(letters[mid]>target) {
                end = mid-1;
                ans = mid;
            }
            else if(letters[mid]<=target)
                beg = mid + 1;
        }
        return letters[ans];
    }
};