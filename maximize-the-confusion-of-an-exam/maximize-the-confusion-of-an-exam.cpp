class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int size=s.size();
        int left = 0, result = 0, cnt = 0;
        for(int i=0;i<size;i++){
            if(s[i]=='F')
                cnt++;
            while(cnt>k){
                if(s[left]=='F')
                    cnt--;
                left++;
            }
            result = max(i-left+1, result);
        }
      cnt=0;left=0;
      for(int i=0;i<size;i++){
            if(s[i]=='T')
                cnt++;
            while(cnt>k){
                if(s[left]=='T')
                    cnt--;
                left++;
            }
            result = max(i-left+1, result);
        }
        return result;       
    }
};