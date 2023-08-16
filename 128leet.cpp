#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int>& v) {
    if(v.size()==0){
        return 0;
    }
    sort(v.begin(),v.end());
    int x=0;
    while(x<v.size()){
        if(v[x]==v[x+1]){
            v.erase(v.begin()+x);
        }
        else{
            x++;
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int m=1;
    int c=1;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]+1==v[i+1]){
            c++;
        }
        else{
            c=1;
        }
        if(c>=m){
            m=c;
        }
    }
    return m;
}

int main(){
    vector<int> nums{-2,-3,-3,7,-3,0,5,0,-8,-4,-1,2};
    cout<<longestConsecutive(nums);

}