class Solution {
public:
    void helper(vector<string>&t,string& s,int ind,vector<string>&ans,string out){
    if(ind==s.length()){
        ans.push_back(out);
        return;
    }
    for(int i=0;i<t[s[ind]-'0'].size();i++){
        out+=t[s[ind]-'0'][i];
        helper(t,s,ind+1,ans,out);
        out.pop_back();
    }

}

vector<string> letterCombinations(string d) {
    vector<string>t{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    if(d.size()==0){
        return ans;
    }
    helper(t,d,0,ans,"");
    return ans;      
}
};