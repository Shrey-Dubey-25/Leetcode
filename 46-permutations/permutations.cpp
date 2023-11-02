class Solution {
public:
void helper(vector<int>&v,vector<int>temp,vector<bool>vis,vector<vector<int>>&ans){
        if(temp.size()==v.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<v.size();i++){
            if(vis[i]==0){
                temp.push_back(v[i]);
                vis[i]=1;
                helper(v,temp,vis,ans);
                vis[i]=0;
                temp.pop_back();
            }
        }

}
vector<vector<int>> permute(vector<int>& v) {
    vector<vector<int>>ans;
    vector<bool>vis(v.size(),0);
    helper(v,{},vis,ans);
    return ans;
}
};