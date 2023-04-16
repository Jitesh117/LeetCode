class Solution {
public:
    int addMinimum(string word) {
       string t = "00" + word + "00";
        int result = 0;
       for(int i = 2;i<word.size() + 2;i++){
           if(t[i] == 'a'){
             if(t[i+1] == 'c')result++;
             if(t[i+1] == 'a')result+=2;     
             if(t[i+1] == '0')result+=2;     
           }
           if(t[i] == 'b'){
              if(t[i-1] == 'c') result++; 
              else if(t[i-1] == 'b') result++; 
              else if(t[i-1] == '0') result++; 
              if(t[i+1] != 'c') result++; 
           }
           if(t[i] == 'c'){
               if(t[i-1] == 'c') result+=2; 
              else if(t[i-1] == '0') result+=2; 
           }
       }  
        return result;
    }
};