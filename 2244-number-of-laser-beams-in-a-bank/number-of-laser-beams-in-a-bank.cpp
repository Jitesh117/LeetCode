class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>scount;
          for(string s: bank){
              int count =0; 
              for(int i = 0;i<s.size();i++)
                 if(s[i] == '1') 
                     count++;
              if(count)
                  scount.push_back(count);
          }
        int result = 0;
        for(int i = 1;i<scount.size();i++)
            result += scount[i]*scount[i-1];
        return result;
    }
};