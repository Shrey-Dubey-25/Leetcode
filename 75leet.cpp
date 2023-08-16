#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v{2,0,1};
    int s=0,eoz=0,e=v.size()-1;
    while(s<=e){
        if(v[s]==0){
            swap(v[s],v[eoz]);
            s++;
            eoz++;
        }
        else if(v[s]==1){
            s++;
        }
        else if(v[s]==2){
            swap(v[s],v[e]);
            e--;
        }
    }
    
}