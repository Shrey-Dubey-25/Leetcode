#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int common(string s1,string s2){
    int n=0,m=0,c=0;
    while( n<s1.length() && m<s2.length()){
        if(s1[n]==s2[m]){
            c++;
        }
        else{
            return c;
        }
        n++;
        m++;
    }
    return c;
}

string longestCommonPrefix(vector<string>& v) {
    int c=INT_MAX;
    string s="";
    for(int i=0;i<v.size()-1;i++){
        c=min(c,common(v[i],v[i+1]));
    }
    s=v[0].substr(0,c); 
    return s;
}        



int main(){
    vector<string>v{"flower","flow","flight"};
    cout<<longestCommonPrefix(v);
}