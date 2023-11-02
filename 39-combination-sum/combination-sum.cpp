class Solution {
public:

void helper(vector<int>& v,int i,int& tar,int s,vector<int>t,vector<vector<int>>&ans){
    if(s==tar){
        ans.push_back(t);
        return;
    }
    if(i==v.size() || s>tar){
        return;
    }

    t.push_back(v[i]);
    helper(v,i,tar,s+v[i],t,ans);
    t.pop_back();
    helper(v,i+1,tar,s,t,ans);
}
vector<vector<int>> combinationSum(vector<int>& v, int target) {
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    helper(v,0,target,0,{},ans);
    return ans;
}

};