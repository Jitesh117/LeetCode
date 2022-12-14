class Solution {
public:
    bool backspaceCompare(string S, string T) {
         string str1,str2; 
            
         for(int i = 0; i < S.size(); i++)
         {   
                 if(S[i] == '#' && !str1.empty())
                         str1.pop_back();
                 
                 else if(S[i] != '#')
                         str1.push_back(S[i]);    
         }
         for(int i = 0; i < T.size(); i++)
         {      
                 if(T[i] == '#' && !str2.empty())
                         str2.pop_back();
                 
                 else if(T[i] != '#')
                         str2.push_back(T[i]); 
         } 
         return str1 == str2;   
    }
};