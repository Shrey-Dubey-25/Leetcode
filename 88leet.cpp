#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>a{1};
    vector<int>b{};
    int i=0,j=0;
    for(int i=0;i<b.size();i++){
        a.pop_back();
    }
    while(j<b.size() && i<a.size()){
        if(a[i]<b[j]){
            i++;
        }
        else{
            a.insert(a.begin()+i,b[j]);
            j++;
        }
    }
    if(j<b.size()){
       for(int x=j;x<b.size();x++){
            a.insert(a.begin()+(i++),b[x]);
       }
    }
    for(auto i:a){
        cout<<i<<" ";
    }
}