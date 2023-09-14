class Solution {
public:
    bool pallindrome(string &s,int i,int j){
    while(i<j){
       if(s[i++]!=s[j--]){
           return false;
       }
    }
    return true;
}

void helper(string& s,int ind,vector<string>&p,vector<vector<string>>&ans){
    if(ind==s.size()){
        ans.push_back(p);
        
    }
    for(int i=ind;i<s.length();i++){
        if(pallindrome(s,ind,i)){
            p.push_back(s.substr(ind,i-ind+1));
            helper(s,i+1,p,ans);
            p.pop_back();
        }
    }
    
}

vector<vector<string>> partition(string s) {
    vector<string>p;
    vector<vector<string>>ans;
    helper(s,0,p,ans);
    return ans;
}

};