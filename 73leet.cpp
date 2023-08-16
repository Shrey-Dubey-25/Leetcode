#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void setZeroes(vector<vector<int>>& v) {
    int n=v.size();
    vector<int>rows(n,1);
    vector<int>cols(n,1);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==0){
                rows[i]=0;
                cols[j]=0;
            }
        }
    }
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(rows[i]==0||cols[j]==0){
                v[i][j]=0;
            }
            else{
                v[i][j]=v[i][j];
            }
        }
    }  
}
int main(){
    vector<vector<int>>v{{1,2,5},
                         {0,0,1},
                         {1,2,3}};
    setZeroes(v);

}