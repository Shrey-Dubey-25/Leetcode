#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// string removeDuplicates(string s) {
//     int i=0;
//     while(i<s.length()){
//         if(s[i]==s[i+1]){
//             s.erase(i,2);
//             int j=i;
//             while(j>0 && s[j]==s[j-1]){
//                 j--;
//             }
//             i=j;
//         }
//         else{
//             i++;
//         }
//     }
//     return s;
// }


string removeDuplicates(string s){
    string ans="\0";
    int i=0,j=0;
    while(i<s.length()){
        if(ans.back()!=s[i]){
            ans.push_back(s[i]);
            
        }
        else{
            ans.pop_back();
            
        }
        i++;
    }
    return ans;
}
int main(){
    string s="azxxzy";
    removeDuplicates(s);
}