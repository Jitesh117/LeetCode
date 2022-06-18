class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp=heights;
        int count = 0;
        sort(temp.begin(),temp.end());
        for(int i = 0;i<heights.size();i++)
            if(heights[i]!=temp[i])
                count++;
        return count;
    }
};