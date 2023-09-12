class Solution {
public:
void helper(vector<int>&v,int i,int& t,int s,vector<int>path,vector<vector<int>>&ans){
    if(s==t){
        ans.push_back(path);
        return ;
    }
    if(i==v.size() || s>t){
        return ;
    }   
    path.push_back(v[i]);
    helper(v,i,t,s+v[i],path,ans);
    path.pop_back();
    if(i+1<v.size()){
        helper(v,i+1,t,s,path,ans);
    }

}


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>path;
        helper(candidates,0,target,0,path,ans);
        return ans;        
    }
};