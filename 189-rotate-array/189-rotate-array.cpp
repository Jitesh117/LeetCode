class Solution {
public:
    void rotate(vector<int>& v, int k) {
       k = k%(v.size());
        reverse(v,0,v.size()-1);
        reverse(v,k,v.size()-1);
        reverse(v,0,k-1);
        
        
    }
    void reverse(vector<int>& v,int start, int end)
    {
        while(start<end)
        {
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            end--;
            start++;
        }
    }
};
