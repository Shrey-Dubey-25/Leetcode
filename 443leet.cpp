#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int compress(vector<char>& s) {
    vector<int>hash(26,'\0');
    for(auto i:s){
        hash[i-97]++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        if(hash[i]==0){
            continue;
        }
        if(hash[i]==1){
            char ch=(char)(i+97);
            ans.push_back(ch);
        }
        else if(hash[i]>1){
            char ch=(char)(i+97);
            ans.push_back(ch);
            ans+=to_string(hash[i]);
        }
    }
    vector<char>v(s.size(),0);
    int x=0;
    for(auto i:ans){
        v[x++]=i;
    }
    s=v;
    for(auto i:s){
        cout<<i<<" ";
    }
    return ans.size();
}

int main(){
    vector<char> chars{'a'};
    compress(chars);
}