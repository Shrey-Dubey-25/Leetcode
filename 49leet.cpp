#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
//******Not Complete**************
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>>hash;
    vector<int>v;
    for(int i=0;i<strs.size();i++){
        string s=strs[i];
        sort(s.begin(),s.end());
        hash[s].push_back(strs[i]);
    }
    vector<vector<string>>ans;

    for(auto i=hash.begin();i!=hash.end();i++){
            ans.push_back(i->second);
    }
    return ans;
    }
int main(){
    vector<string>s{"eat","tea","tan","ate","nat","bat"};
    groupAnagrams(s);

}