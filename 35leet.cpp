#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& v, int t) {
    int s=0,e=v.size(),m;
    while(s<e){
        m=s+(e-s)/2;
        if(v[m]>=t){
            e=m;
        }
        else if(v[m]<t){
            s=m+1;
        }
    }
    return s;
}

int main(){
    vector<int>v{1,3,5,6};
    int t=0;
    cout<<searchInsert(v,t);
}