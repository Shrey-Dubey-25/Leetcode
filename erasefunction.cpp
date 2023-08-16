#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int erase(string& s,int n,int l){
    if(n+l<=s.length()){
        for(int i=n;i<n+l;i++){
            s[i]='\0';
        }
    }
    else{
        return -1;
    }
}


int main(){
    string s="hello";
    cout<<s;

}