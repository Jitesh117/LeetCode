class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int n = num;
        while(n){
            sum += n%10;
            n /= 10;
            if(n ==0 and sum > 9){
                n = sum;
                sum = 0;
            }
        }
        return sum;
    }
};