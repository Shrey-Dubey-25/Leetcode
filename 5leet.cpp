#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

string expand(string s,int i,int j){
    string ans="";
    while(i>=0 && j<s.length() && s[i]==s[j]){
        ans=s.substr(i,j-i+1);
        i--;
        j++;        
    }
    return ans;
}

string longestPalindrome(string s) {
    string maxs="";
    int i=0;        
    for(int i=0;i<s.length();i++){
        string ns=expand(s,i,i);
        if(ns.length()>maxs.length()){
            maxs=ns;
        }
        ns = expand(s,i,i+1);
        if(ns.length()>maxs.length()){
            maxs=ns;
        }
    }
    return maxs;
}

int main(){
    string s="babad";
    cout<<longestPalindrome(s);

}