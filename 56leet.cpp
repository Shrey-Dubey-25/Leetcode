
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v){
    vector<vector<int>>op;
    sort(v.begin(),v.end());
    op.push_back(v[0]);
    for(int i=1;i<v.size();i++){{
        if(op.back()[1]>=v[i][0]){
            op.back()[1]=max(v[i][1],op.back()[1]);   
        }
        else{
            op.push_back(v[i]);
        }
    }
    }
    for(auto i:op){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"  ";
    }
    return op;
}

int main(){
    vector<vector<int>>v{{2,3},{4,5},{6,7},{8,9},{1,10}};
    merge(v);
    
}