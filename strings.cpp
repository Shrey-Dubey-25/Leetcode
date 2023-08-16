#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>


using namespace std;

int main(){
    string s="the  sky  is    blue";
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            c++;
        }
        else{
            break;
        }
    }
    if(c!=0){
        s.erase(0,c);
    }   
    c=0; 
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==' '){
            c++;
        }
        else{
            break;
        }
    }
    string ans="";
    if(c!=0){
        s.erase(s.length()-c,c);
    }
    int mk1=s.length()-1,mk2=s.length()-1;
    while(mk1>=0){
        if(s[mk1]>=97&&s[mk1]<=122){
            
        }
    }
    
}