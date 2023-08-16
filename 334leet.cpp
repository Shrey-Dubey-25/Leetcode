#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool increasingTriplet(vector<int>& v) {
    if(v.size()<3){
        return false;
    }
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            for(int k=j+1;k<v.size();k++){
                if(v[k]>v[j] && v[j]>v[i]){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    vector<int>v{2,1,5,0,4,6};
    cout<<increasingTriplet(v);
}