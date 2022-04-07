class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       while(stones.size() > 1){
            sort(stones.begin(),stones.end());
            int y = stones[stones.size()-1];
            int x = stones[stones.size()-2];
            int result = y-x;
            
            stones.pop_back();
            stones.pop_back();
            
            if(result > 0){
                stones.push_back(result);
            }
        }
        if(stones.size()){
            return stones[0];
        }
        return 0;
    }
};