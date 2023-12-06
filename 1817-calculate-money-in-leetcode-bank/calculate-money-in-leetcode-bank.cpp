class Solution {
public:
    int totalMoney(int n) {
      int i = 0;
      int result = 0;
      int cur = 0;
      while(i < n){
          if(i % 7 == 0 and i > 0){
              cur = cur - 6;
          }
          result += cur + 1;
          i++;
          cur++;
      }  
      return result;
    }
};