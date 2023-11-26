class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<int>st;
       int i = 0;
       int n = heights.size();
       int result = 0;
       while(i < n){
           if(st.empty() or (heights[st.top()] <= heights[i])) st.push(i++);
           else{
               int minIdx = st.top();
               st.pop();
               int width = i;
               if(st.size()) width = i - 1 - st.top();
               int area = heights[minIdx] * width;
               result = max(result, area);
           }
       } 
       while(st.size()){
           int minIdx = st.top();
           st.pop();
           int width = i;
           if(st.size()) width = i - 1 - st.top();
           int area = heights[minIdx] * width;
           result = max(result, area);
       }
       return result;
    }
};