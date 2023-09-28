class Solution {
public:
void helper(vector<int>&v,int i,int t,vector<int>path,vector<vector<int>>&ans){
    if(t==0){
        ans.push_back(path);
        return;
    }
    if(i==v.size()||t<0){
        return;
    }
    path.push_back(v[i]);
    helper(v,i,t-v[i],path,ans);
    path.pop_back();
    helper(v,i+1,t,path,ans);
}


vector<vector<int>> combinationSum(vector<int>& v, int t) {
    vector<vector<int>>ans;
    vector<int>path;
    sort(v.begin(),v.end());
    helper(v,0,t,path,ans);
    return ans;

}

};