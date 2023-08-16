#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& v) {
    sort(v.begin(),v.end());
    return v[v.size()/2];
} 

int majorityElement(vector<int>& v) {//moore voting algorithm
    int c=0,can=0;
    for(auto i:v){
        if(c==0){
            can=i;
        }
        if(i==can){
            c++;
        }
        else{
            c--;
        }
    }
    return can;
}
int main(){
    vector<int>v{2,2,1,1,1,2,2};
    cout<< majorityElement(v);


}