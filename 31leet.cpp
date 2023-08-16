#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>v{3,2,1};
    int n,x=v.size()-1;
    bool flag=0;
    
    while(n>=0 && v[n]<v[n-1]){
        if(n==0){
            flag=1;
        }
        n--;
    }
    
    if(flag==0){
    swap(v[n],v[n-1]);
    }
    else{
        sort(v.begin(),v.end());
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    
}