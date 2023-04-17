class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),comp);
        
        vector<vector<int>>result;
        for(int i = 0;i<people.size();i++){
            result.insert(result.begin() + people[i][1],people[i]);
        }
        return result;
    }
    static bool comp(vector<int>one, vector<int>two){
        if(one[0] != two[0]) return one[0] > two[0];
        
        return one[1] < two[1];
    }
};