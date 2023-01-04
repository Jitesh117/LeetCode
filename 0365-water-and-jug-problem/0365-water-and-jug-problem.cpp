class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
       return targetCapacity%gcd(jug1Capacity,jug2Capacity) == 0 and targetCapacity<=jug1Capacity+jug2Capacity; 
    }
    int gcd(int a, int b){
        if(b == 0 ) return a;
        return gcd(b,a%b);
    }
};