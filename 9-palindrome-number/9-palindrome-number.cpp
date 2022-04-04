class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int number = x,temp = x;
        long n=0;
        
        int dig = 0;
         while(number != 0) {
            number = number / 10;
             dig++;
   }
       for(int i = 0;temp!=0;i++)
       {
           n+=(temp%10)*(pow(10,dig-i-1));
           temp = temp/10;
       }
    if(n==x)
        return true;
    return false;
        
    }
};