class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
      sort(arr.begin(),arr.end(),comp);
        return arr;
        
    }
    static bool comp(int &a,int &b)
    {   int a1=0,b1=0,n=a,m=b;
        while(m)
        {
            m=m&(m-1);
            b1++;
        }
     while(n)
     {
         n=n&(n-1);
         a1++;
     }
     if(a1>b1)
         return 0;
     if(a1<b1)
         return 1;
     return (a<b);
    }
};