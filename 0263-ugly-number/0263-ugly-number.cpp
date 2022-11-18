class Solution {
public:
    bool isUgly(int n) {
        int num = n;
        for(int i = 2;i<6 and num;i++)
            while(num%i == 0)
                num/=i;
        return num == 1;
        
    }
};