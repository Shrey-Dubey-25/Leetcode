
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int>v{-1};
    int m=v[0],eom=v[0];
    for(int i=1;i<v.size();i++){
        eom=eom+v[i];
        if(eom<v[i]){
            eom=v[i];
        }
        if(m<eom){
            m=eom;
        }
    }
    return m;
}
