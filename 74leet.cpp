#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
bool searchMatrix(vector<vector<int>>& v, int target) {
int s=0,e=v.size()*v[0].size();
    int t=20;
    while(s<e){
        int m=s+(e-s)/2;
        int i=m/v[0].size();
        int j=m%v[0].size();
        if(v[i][j]==t){
           return true;
        }
        else if(v[i][j]>t){
            e=m;
        }
        else{
            s=m+1;
        }
    }
    return false;
}

int main(){


}