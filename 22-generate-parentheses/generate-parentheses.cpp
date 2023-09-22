class Solution {
public:
    void helper(string s,int& n,int o,int c,vector<string>&ans){
    if(s.length()==2*n){
        ans.push_back(s);
        return;
    }
    if(o>0){
        s.push_back('(');
        helper(s,n,o-1,c,ans);
        s.pop_back();
    } 
    if(c>0 && c-o>0){
        s.push_back(')');
        helper(s,n,o,c-1,ans);
        s.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string>ans ;
    int o=n;
    int c=n;
    string s;
    helper(s,n,o,c,ans);
   
    return ans;
}
};