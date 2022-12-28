class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       for(auto it:piles)
           pq.push(it);
       while(k--)
       {
           int temp = pq.top();
           temp-=temp/2;
           pq.pop();
           pq.push(temp);
       }
       int result = 0;
       while(pq.size())
       {
           result+=pq.top();
           pq.pop();
       }
        return result;
    }
};