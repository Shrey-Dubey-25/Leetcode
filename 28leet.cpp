#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// int check(string s,string n,int x){
//     bool flag=true;
//     if(x+n.length()>s.length()){
//         return false;
//     }
//     int i=0;
//     while(x<s.length() && i<n.length() && flag){
//         if(s[x]!=n[i]){
//             flag=false;
//         }
//         x++;i++;
//     }
//     return flag;
// }

// int strStr(string s, string n) {
//     for(int i=0;i<s.length();i++){
//         if(s[i]==n[0]){
//             if(check(s,n,i)==true){
//                 return i;
//             }
//         }
//     }
//     return -1;
// }





int strStr(string h, string n) {
    int i=0;
    while(i<h.length()){
        if(h[i]==n[0]){
            string s=h.substr(i,min(n.length(),h.length()));
            cout<<s<<endl;
            if(s==n){
                return i;
            }
        }
        i++;
    }
    return -1;
    }

int main(){
    string s="sadbutsad",n="sad";
    cout<<strStr(s,n);
}