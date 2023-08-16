#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& v) {
    int x=0,max=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]<v[x]){
            x=i;
        }
        int dif=v[i]-v[x];
        if(dif>max){
            max=dif;
        }
    }    
    return max;
}   


int main(){
    vector<int>v{5,4,3,2,1};
    maxProfit(v);
}