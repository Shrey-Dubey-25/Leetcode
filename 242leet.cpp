#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// bool isAnagram(string s, string t) {
//     if(s.length()!=t.length()){
//         return false;
//     }
//     vector<int>v(26,0);
//     int i=0;
//     while(i<s.length()){
//         v[s[i]-97]++;
//         v[t[i]-97]++;
//         i++;
//     }
//     for(auto i:v){
//         if(i%2!=0){
//             return false;
//         }
//     }
//     return true;
// }                                                  ************** This approach is also fine******************  

bool isAnagram(string s, string t) {
    if(s.length()!=t.length()){
        return false;
    }
    vector<int>v(26,0);
    int i=0;
    while(i<s.length()){
        v[s[i]-97]++;
        v[t[i]-97]--;
        i++;
    }
    for(auto i:v){
        if(i!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "car", t = "rat";
    cout<<isAnagram(s,t);
    
}