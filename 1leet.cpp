#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// vector<int> twoSum(vector<int>& x, int t) {
//     vector<int>v=x;
//     sort(v.begin(),v.end());
//     vector<int>ans;
//     for(int i=0;i<v.size()-1;i++){
//         int ele1=v[i];
//         int s=i+1,e=v.size()-1;
//         while(s<=e){
//             int m=s+(e-s)/2;
//             if(v[m]==(t-ele1)){
//                 for(int i=0;i<x.size();i++){
//                     if(x[i]==ele1||x[i]==v[m]){
//                         ans.push_back(i);
//                     }
//                 }
//                 return ans;
//             }
//             else if(v[m]>t-ele1){
//                 e=m-1;
//             }
//             else{
//                 s=m+1;
//             }
//         }
//     }
//     return ans;
// }

vector<int> twoSum(vector<int>& v, int t) {
    int m=INT_MIN;
        for(int i=0;i<v.size();i++){
            if(v[i]>=m){
                m=v[i];
            }
        }
    vector<int>hash(m+1,0);
    for(int i=0;i<v.size();i++){
        hash[v[i]]=i;
    }

    for(int i=0;i<v.size();i++){
        int x=t-v[i];
        if (x <= m && hash[x] != -1 && hash[x] != i) {
            return {i, hash[x]};
        }
    }
    return {}; 
}

int main(){
    vector<int>v{3,2,3};
    int t=6;
    twoSum(v,t);
}