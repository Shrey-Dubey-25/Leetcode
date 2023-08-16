#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>>v{{1,2,3},
                         {4,5,6},
                         {7,8,9}};
    for(int i=0;i<=v.size();i++){
        for(int j=i;j<v[0].size();j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<v.size();i++){
        int x=0;
        int y=v[0].size()-1;
        while(x<y){
            swap(v[i][x],v[i][y]);
            x++;
            y--;
        }
    }


    for(auto i:v){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}