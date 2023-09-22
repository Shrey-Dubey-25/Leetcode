class Solution {
public:
    void helper(vector<int>&v,int i,vector<int>op,vector<vector<int>>&ans){
        if(i==v.size()){
            ans.push_back(op);
            return;
        }
        helper(v,i+1,op,ans);
        op.push_back(v[i]);
        helper(v,i+1,op,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(nums,0,{},ans);
        int fa=0;
        for(auto i:ans){
            int s=0;
            for(auto j:i){
                s^=j;
            }
            fa+=s;
        }
        return fa;
    }
};