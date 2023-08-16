#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> generate(int numRows) {
        
}

int main(){
    int n=5;
    vector<vector<int>>v;
    vector<int>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0){
                x.push_back(1);
                continue;
            }
            else if(j==0||j==i){
                x.push_back(1);
            }
            else{
                x.push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
        v.push_back(x);
        x.clear();
    }


    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"  ";
    }

}