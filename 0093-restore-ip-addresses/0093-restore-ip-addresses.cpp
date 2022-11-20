class Solution {
public:
    vector<string> ans;
    void solve(string s,vector<string> &v,int index){
        int m=v.size(),n=s.size();
        if(index==n and m==4){
            ans.push_back(v[0]+'.'+v[1]+'.'+v[2]+'.'+v[3]);
            return;
        }
        
        if(index>n or m>4){
            return;
        }
        
        for(int i=0;i<3;i++){
            
            if(index+i<=n-1){
                string str=s.substr(index,i+1);
                if((i==0 and str>="0" and str<="9") or (i==1 and str>="10" and str<="99") or (i==2 and str>="100" and str<="255")){
                    v.push_back(str);
                    solve(s,v,index+i+1);
                    v.pop_back();  
                }
            }
        }
        return;
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> v;
        solve(s,v,0);
        return ans;
    }
};