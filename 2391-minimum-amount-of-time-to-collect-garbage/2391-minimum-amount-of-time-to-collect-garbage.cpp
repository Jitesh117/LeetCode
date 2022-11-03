class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int countg = 0;
        for(int i = 1;i<travel.size();i++)
            travel[i]+=travel[i-1];
        int lastm=0,lastp=0,lastg=0;
        for(int i = 0;i<garbage.size();i++){
            for(char s:garbage[i]){
                countg++;
                if(s == 'M')
                   lastm = i;
                else if(s == 'P')
                    lastp = i;
                else lastg = i;
            }
        }
       int result = countg;
       if(lastm>0) result+=travel[lastm-1];
       if(lastp>0) result+=travel[lastp-1];
       if(lastg>0) result+=travel[lastg-1];
       
        return result;
    }
};