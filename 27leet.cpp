#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& v, int val) {
        int i=0;
        while(i<v.size()){
            if(v[i]==val){
                v.erase(v.begin()+i);
            }    
            else{
                i++;
            }
        }
        return v.size();
    }

int main(){
    vector<int>v{1,2,3,3,3,4,2};
    int val=3;
    removeElement(v,val);
}