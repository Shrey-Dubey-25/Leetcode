#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// bool isIsomorphic(string s, string t) {         *******This soln is not gonna work bcoz in isomorphic we actually check for strings which have 
//     if(s.length()!=s.length()){                         strings + integers present in them.***********
//         return false;
//     }        
//     vector<char>c(26,'\0');
//     for(int i=0;i<s.length();i++){
//         if(c[s[i]-97]=='\0'){
//             c[s[i]-97]=t[i];
//         }
//         else{
//             if(c[s[i]-97]!=t[i]){
//                 return false;
//             }
//         }
//     }
//     for(auto i:c){
//         cout<<i<<" ";
//     }
//     return true;  
// }


bool isIsomorphic(string s, string t) { 
    vector<char>c1(256,'\0'),c2(256,'\0');
    for(int i=0;i<s.length();i++){
        if(c1[s[i]]=='\0'){
            c1[s[i]]=t[i];
        }
        else if(c1[s[i]]!=t[i]){
            return false;
        }
    }
    for(int i=0;i<s.length();i++){
        if(c2[t[i]]=='\0'){
            c2[t[i]]=s[i];
        }
        else if(c2[t[i]]!=s[i]){
            return false;
        }
    }
    string temp="";
    string temp2="";
    for(int i=0;i<s.length();i++){
        temp+=c1[s[i]];
    }
    for(int i=0;i<s.length();i++){
        temp2+=c2[t[i]];
    }
    if(temp==t && temp2==s){
        return true;
    }
    return false;
}

int main(){
    string s="badc";
    string t="baba";
    cout<<isIsomorphic(s,t);
}