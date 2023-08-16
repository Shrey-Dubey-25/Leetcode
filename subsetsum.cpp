#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool ispossible(vector<int>v,int su,int i,int givsu){
    if(su==givsu){
        return true;
    }

    return ispossible(v,su+v[i],i+1,givsu);
    return ispossible(v,su,i+1,givsu);
    
}

int main(){
    vector<int>v{1,2,4,3};
    cout<<ispossible(v,0,0,10);

}