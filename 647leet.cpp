#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int expand(string s,int i,int j){
    int c=0;
    while(i>=0&&j<s.length()&&s[i]==s[j]){
        c++;i--;j++;
    }
    return c;
}

int countSubstrings(string s) {
    int c=0;
    for(int i=0;i<s.length();i++){
        c+=expand(s,i,i);
        c+=expand(s,i,i+1);
    }
    return c;
}

int main(){
    string s="abc";
    cout<<countSubstrings(s);


}