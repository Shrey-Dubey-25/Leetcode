#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <bitset>

using namespace std;
int main(){
    
    vector<int>v{3,1,2,5,3};
    bitset<128>x=0<<v.size(); 
    cout<<x;
    bitset<128>dup;
    for(auto i:v){
        bitset<128>m=m<<i-1;
        if((x&m)==m){
            dup=m;
        }
        else{
            x=x|m;
        }
    }
        

}