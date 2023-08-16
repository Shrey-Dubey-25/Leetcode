#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v{1,3,4,2,2};
    vector<int>x(v.size(),0);
    for(auto i:v){
        if(x[i]==0){
            x[i]=1;
        }
        else{
            return i;
        }
    }
}