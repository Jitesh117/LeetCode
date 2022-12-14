class Solution {
public:
    bool backspaceCompare(string s, string t) {
         string str1,str2; 
            
         for(int i = 0; i < s.size(); i++)
         {   
                 if(s[i] == '#' && !str1.empty())
                         str1.pop_back();
                 
                 else if(s[i] != '#')
                         str1.push_back(s[i]);    
         }
         for(int i = 0; i < t.size(); i++)
         {      
                 if(t[i] == '#' && !str2.empty())
                         str2.pop_back();
                 
                 else if(t[i] != '#')
                         str2.push_back(t[i]); 
         } 
         return str1 == str2;   
    }
};