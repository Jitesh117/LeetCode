class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        vector<int> v;
        for(int i=0; i<n; i++){
            if(ops[i]=="+"){
                v.push_back((v[v.size()-2])+(v[v.size()-1])); 
            }else if(ops[i]=="C"){
                v.pop_back();
            }else if(ops[i]=="D"){
                v.push_back(v[v.size()-1]*2);
            }else{
                v.push_back(stoi(ops[i]));
            }   
        }    
        int ans=accumulate(v.begin(),v.end(),0);
        return ans;
    }
};