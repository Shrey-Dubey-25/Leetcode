class Solution {
public:
    void helper(vector<int>&v,vector<int>&f,vector<int>&p,vector<vector<int>>&ans){
        if(p.size()==v.size()){
            ans.push_back(p);
            return;
        }
        for(int i=0;i<v.size();i++){
            if(f[i]==0){
                p.push_back(v[i]);
                f[i]=1;
                helper(v,f,p,ans);
                f[i]=0;
                p.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& v) {
        vector<int>f(v.size(),0);
        vector<int>p;
        vector<vector<int>>ans;
        helper(v,f,p,ans);
        return ans;
    }
};