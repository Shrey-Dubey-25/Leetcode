#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int maxLen(vector<int>&v, int n){   
    int s=0;
    for(auto i:v){
        s+=i;
    }
    int i=0,j=v.size()-1;
    while(i<j && s>0){
        if(v[i]>v[j]){
            s-=v[i];
            i++;
        }
        else{
            s-=v[j];
            j--;
        }
    }
    if(s==0){
    return j-i+1;
    }
    else{
        return -1;
    }
}

int main(){
    vector<int>v{15,-2,2,-8,1,7,10,23};
    cout<<maxLen(v,v.size());

}
