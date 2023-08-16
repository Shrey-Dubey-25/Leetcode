#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> hashc(string o){
    vector<int>v(26,0);
    int c=26;
    
    for(int i=0;i<o.length();i++){
        v[(o[i]-'a')]=c;
        c--;
    }
    return v;
}


string customSortString(string order, string s) {
        vector<int>h=hashc(order);
        sort(s.begin(),s.end(),[h](char a,char b){
            return h[a-'a']>h[b-'a'];
        });
        return s;
}

int main(){
    customSortString("cba","abcd");

}